
#include "dJointID.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace ODE {

dJointID erzeugeODEGelenk(
    float position[3],
    float ausrichtung[3],
    float maxGeschwindigkeit,
    float maxWinkel,
    float minWinkel,
    NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt,
    NaoSimulation::Entwurf::NaoModel::ODE::dBodyID body1,
    NaoSimulation::Entwurf::NaoModel::ODE::dBodyID body2
) {
    // erzeuge Scharniergelenk
    dJointID hinge = dJointCreateHinge(welt, 0);
    dJointAttach(hinge, body1, body2);
    dJointSetHingeAnchor(hinge, position[0], position[1], position[2]);
    //printf("Hinge: %f %f %f\n", ausrichtung[0], ausrichtung[1], ausrichtung[2]);

    dJointSetHingeAxis(hinge, ausrichtung[0], ausrichtung[1], ausrichtung[2]);

    // Eigenschaften des (linken) Kniegelenks
    // Setze die maximale "Dreh"-Geschwindigkeit des Gelenks
    dJointSetHingeParam(hinge, dParamFMax, maxGeschwindigkeit);
    // untere Winkelgrenze
    dJointSetHingeParam(hinge, dParamLoStop, minWinkel);
    // obere Winkelgrenze
    dJointSetHingeParam(hinge, dParamHiStop, maxWinkel);

    return hinge;
}

void bewegeGelenk(dJointID gelenk, float zielWinkel, bool* inBewegung) {
    float gelenkWinkel = dJointGetHingeAngle(gelenk);
    float winkel_start = gelenkWinkel;

    float winkel_min = dJointGetHingeParam (gelenk, dParamLoStop);
    float winkel_max = dJointGetHingeParam (gelenk, dParamHiStop);

    float richtung = gelenkWinkel < zielWinkel ? 1.0 : -1.0;

    if (zielWinkel > winkel_max) { zielWinkel = winkel_max; }
    if (zielWinkel < winkel_min) { zielWinkel = winkel_min; }

    // Uebergib die Richtung an das Gelenk
    dJointSetHingeParam(gelenk, dParamVel, richtung);

    // Solange der 'gelenkWinkel' noch nicht den 'zielWinkel' erreicht hat
    // ODER noch nicht der minimale bzw. maximale Winkel erreicht ist ...
    while(
        (winkel_start < zielWinkel ? gelenkWinkel < zielWinkel : gelenkWinkel > zielWinkel)
    ) {
        // Setze das Flag, dass das Gelenk in Bewegung ist
        *inBewegung = true;
        // Warte fuer eine gewisse Zeit (hier: 500 Mikrosekunden)
        // Falls die Simulation ruckelt: hier die Zeit [ANPASSEN]
        std::this_thread::sleep_for(std::chrono::microseconds(500));
        gelenkWinkel = dJointGetHingeAngle(gelenk);
    }
    // Wenn die Schleife verlassen wurde ...
    // Stoppe die Bewegung des Gelenks
    dJointSetHingeParam(gelenk, dParamVel, 0.0);
    // Zeige an, das keine Bewegung mehr stattfindet
    *inBewegung = false;
}

}}}}
