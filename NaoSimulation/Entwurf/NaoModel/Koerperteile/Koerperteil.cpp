// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Entwurf_NaoModel_Koerperteile_Koerperteil_BODY

/************************************************************
 Koerperteil class body
 ************************************************************/

// include associated header file
#include "NaoSimulation/Entwurf/NaoModel/Koerperteile/Koerperteil.h"

// Derived includes directives

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace Koerperteile {

// static attributes (if any)

/**
 * 
 */
::PrimitiveTypes::Real Koerperteil::getRadius() {
    return radius;
}

/**
 * 
 */
::PrimitiveTypes::Real Koerperteil::getHoehe() {
    return hoehe;
}

::NaoSimulation::Entwurf::NaoModel::ODE::dBodyID Koerperteil::getOdeKoerperteil() {
    return odeKoerperteil;
}

void Koerperteil::setOdeKoerperteil(::NaoSimulation::Entwurf::NaoModel::ODE::dBodyID koerperteil) {
    odeKoerperteil = koerperteil;
}

void Koerperteil::setRadius(::PrimitiveTypes::Real radius) {
    this->radius = radius;
}

void Koerperteil::setHoehe(::PrimitiveTypes::Real hoehe) {
    this->hoehe = hoehe;
}

} // of namespace Koerperteile
} // of namespace NaoModel
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of Koerperteil class body
 ************************************************************/
