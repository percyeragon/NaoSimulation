
#include "NaoSimulation/Entwurf/NaoModel/PhysikSim.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {


const unsigned int  PhysikSim::MILLISECS_TO_WAIT = 1;


PhysikSim* PhysikSim::initSim() {
    // Physik-Simulation anlegen
    PhysikSim* pSim = new PhysikSim();

    // Lege eine neue Welt an, in der die Simulation passiert
    NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt = new NaoSimulation::Entwurf::NaoModel::Welt::Welt();
    
    // erzeuge das ODE-Welt-Objekt
    welt->setODEWelt(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEWelt());
    // Roboter in der Welt initialisieren
    welt->setRoboter(NaoSimulation::Modellierung::Roboterverwaltung::Roboter::erzeugeRoboter(
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		welt->getODEWelt()
	));

    // Welt der Simulation zuordnen
    pSim->setWelt(welt);

    // Achtung: Die Simulationsschleife wird im init-Kommando gestartet
    // Auch das ModelSubject wird dort festgelegt ...
    return pSim;
}

void PhysikSim::init_simLauf_thread(PhysikSim* sim) {
    // ODE-Welt initialisieren
    dInitODE2(0);
    // Muss vor der Benutzung von jedem Thread gestartet werden ...
    dAllocateODEDataForThread(dAllocateMaskAll);
    simLauf(sim);
}

// Diese Fkt laeuft in einem Thread
// ACHTUNG: Dieser Thread terminiert nicht selbstständig
// und muss von aussen beendet werden!
void PhysikSim::simLauf(PhysikSim* sim) {
    // Endlosschleife ...
    while(true) {
        // Falls der Roboter (in der Welt) in Bewegung ist ...
        if(sim->getWelt()->getRoboter()->inBewegung()) {
            // fuehre einen Schritt in der Simulation durch
            if(sim->getWelt()->getODEWelt() == nullptr) printf("Kaputt!\n");
            dWorldStep(sim->getWelt()->getODEWelt(), 0.01);
            // Melde die Aenderung (Kopiere die Welt mittels Copy-Konstruktor)
            sim->getModelSubject()->notify(sim->getWelt());
        }
        // warte in jeder Iteration eine gewisse Zeit (Reduktion der CPU-Last)
        std::this_thread::sleep_for(std::chrono::milliseconds(PhysikSim::MILLISECS_TO_WAIT));
    }
}

NaoSimulation::Entwurf::NaoObserver::Subject<NaoSimulation::Entwurf::NaoModel::Welt::Welt>* PhysikSim::getModelSubject() {
    return modelsubject;
}

void PhysikSim::setModelSubject(NaoSimulation::Entwurf::NaoObserver::Subject<NaoSimulation::Entwurf::NaoModel::Welt::Welt>* modelSubject) {
    this->modelsubject = modelSubject;
}

std::thread* PhysikSim::getSimLoopThread() {
    return simLopp_thread;
}

void PhysikSim::startSimLoopThread() {
    this->simLopp_thread = new std::thread(PhysikSim::init_simLauf_thread, this);
}

NaoSimulation::Entwurf::NaoModel::Welt::Welt* PhysikSim::getWelt() {
    return welt;
}

void PhysikSim::setWelt(NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt) {
    this->welt = welt;
}

}}}
