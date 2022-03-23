#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_PHYSIKSIM_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_PHYSIKSIM_H

#include <ode/ode.h>
#include <thread>
#include <chrono>

#include "NaoSimulation/Entwurf/NaoObserver/Subject.h"
#include "NaoSimulation/Entwurf/NaoModel/Welt/Welt.h"


namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {

class PhysikSim {
private:
    // Millisekunden, die pro Iteration der Simulationsschleife gewartet werden soll
	static const unsigned int MILLISECS_TO_WAIT;

    // Welt, in der die Simulation ablaeuft
    NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt;

    // Subject, dass die Benachrichtigungen der Aenderungen am Roboter an den View weitergibt
    NaoSimulation::Entwurf::NaoObserver::Subject<NaoSimulation::Entwurf::NaoModel::Welt::Welt>* modelsubject;

	std::thread* simLopp_thread;

    // Simulationsschleife fuer ODE ...(laeuft asynchron ueber thread)
	static void simLauf(PhysikSim* sim);

    // Fuehrt eine ODE-Initialisierung des Threads durch
    static void init_simLauf_thread(PhysikSim* sim);
public:
    // Erzeugt eine Welt fuer die Simulation (inklusive Roboter)
	// und liefert die Welt an den Aufrufer fuer weitere Initialisierungen (Kommandos) zurueck
	static PhysikSim* initSim();

    NaoSimulation::Entwurf::NaoObserver::Subject<NaoSimulation::Entwurf::NaoModel::Welt::Welt>* getModelSubject();    

    void setModelSubject(NaoSimulation::Entwurf::NaoObserver::Subject<NaoSimulation::Entwurf::NaoModel::Welt::Welt>* modelSubject);

	std::thread* getSimLoopThread();

	void startSimLoopThread();

    NaoSimulation::Entwurf::NaoModel::Welt::Welt* getWelt();

    void setWelt(NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt);
};

}}}

#endif
