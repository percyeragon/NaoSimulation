// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Modellierung_Roboterverwaltung_Bein_Schienbein_BODY

/************************************************************
 Schienbein class body
 ************************************************************/

// include associated header file
#include "Schienbein.h"

// Derived includes directives

namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {

Schienbein* Schienbein::erzeugeLinkesSchienbein(NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt) {
    Schienbein* schienbein = new Schienbein();
    schienbein->setHoehe(linkesSchienbeinParams.hoehe);
    schienbein->setRadius(linkesSchienbeinParams.radius);
    schienbein->setOdeKoerperteil(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEBody(
        linkesSchienbeinParams.masse,
        linkesSchienbeinParams.position,
        linkesSchienbeinParams.ausrichtung,
        linkesSchienbeinParams.radius,
        linkesSchienbeinParams.hoehe,
        welt
    ));

    return schienbein;
}

Schienbein* Schienbein::erzeugeRechtesSchienbein(NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt) {
    Schienbein* schienbein = new Schienbein();
    schienbein->setHoehe(rechtesSchienbeinParams.hoehe);
    schienbein->setRadius(rechtesSchienbeinParams.radius);
    schienbein->setOdeKoerperteil(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEBody(
        rechtesSchienbeinParams.masse,
        rechtesSchienbeinParams.position,
        rechtesSchienbeinParams.ausrichtung,
        rechtesSchienbeinParams.radius,
        rechtesSchienbeinParams.hoehe,
        welt
    ));

    return schienbein;
}

} // of namespace Bein
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Schienbein class body
 ************************************************************/
