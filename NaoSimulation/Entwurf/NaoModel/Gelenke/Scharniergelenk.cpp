// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Entwurf_NaoModel_Gelenke_Scharniergelenk_BODY

/************************************************************
 Scharniergelenk class body
 ************************************************************/

// include associated header file
#include "NaoSimulation/Entwurf/NaoModel/Gelenke/Scharniergelenk.h"


// Derived includes directives

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace Gelenke {

// static attributes (if any)
NaoSimulation::Entwurf::NaoModel::ODE::dJointID Scharniergelenk::getODEGelenk() {
    return odeGelenk;
}

void Scharniergelenk::setODEGelenk(::NaoSimulation::Entwurf::NaoModel::ODE::dJointID gelenk) {
    odeGelenk = gelenk;
}

}// of namespace Gelenke
} // of namespace NaoModel
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of Scharniergelenk class body
 ************************************************************/
