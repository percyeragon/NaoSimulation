// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Modellierung_Roboterverwaltung_Rumpf_Becken_BODY

/************************************************************
 Becken class body
 ************************************************************/

// include associated header file
#include "Becken.h"

// Derived includes directives

namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Rumpf {

Becken* Becken::erzeugeLinkesBecken(NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt) {
    Becken* becken = new Becken();
    becken->setHoehe(linkesBeckenParams.hoehe);
    becken->setRadius(linkesBeckenParams.radius);
    becken->setOdeKoerperteil(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEBody(
        linkesBeckenParams.masse,
        linkesBeckenParams.position,
        linkesBeckenParams.ausrichtung,
        linkesBeckenParams.radius,
        linkesBeckenParams.hoehe,
        welt
    ));

    return becken;
}

Becken* Becken::erzeugeRechtesBecken(NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt) {
    Becken* becken = new Becken();
    becken->setHoehe(rechtesBeckenParams.hoehe);
    becken->setRadius(rechtesBeckenParams.radius);
    becken->setOdeKoerperteil(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEBody(
        rechtesBeckenParams.masse,
        rechtesBeckenParams.position,
        rechtesBeckenParams.ausrichtung,
        rechtesBeckenParams.radius,
        rechtesBeckenParams.hoehe,
        welt
    ));

    return becken;
}

} // of namespace Rumpf
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Becken class body
 ************************************************************/
