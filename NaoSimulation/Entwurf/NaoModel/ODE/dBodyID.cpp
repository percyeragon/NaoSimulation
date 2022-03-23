
#include "dBodyID.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace ODE {

dBodyID erzeugeODEBody(
    float masse,
    float position[3],
    float ausrichtung[3],
    float radius,
    float hoehe,
    NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt) {
    // erzeuge Masse
    dMass m;
    // Box fuer die Massenverteilung
    // Die Box fuer die Massenverteilung entspricht einem Quader
    // der den von Drawstuff gezeichneten Zylinder enthaelt
    dMassSetBox(&m, 1, 2*radius, 2*radius, hoehe);
    dMassAdjust(&m, masse);
    

    // erzeuge ein Quternion
    dQuaternion q;
    //dQFromAxisAndAngle(q, ausrichtung[0], ausrichtung[1], ausrichtung[2], M_PI);
    dQSetIdentity(q);
    //printf("quaternion: "); for(int i = 0;i < dQUE__MAX; ++i) printf("%f ", q[i]); printf("\n");
    
    // erzeuge Koerper 1
    dBodyID body = dBodyCreate(welt);
    dBodySetMass(body, &m);
    dBodySetPosition(body, position[0], position[1], position[2]);
    dBodySetQuaternion(body, q);

    return body;
}

}}}}
