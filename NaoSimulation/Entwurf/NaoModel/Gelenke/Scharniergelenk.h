// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_GELENKE_SCHARNIERGELENK_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_GELENKE_SCHARNIERGELENK_H

/************************************************************
 Scharniergelenk class header
 ************************************************************/

//#include "NaoSimulation/Entwurf/NaoModel/Gelenke/Pkg_Gelenke.h"

#include "../BewegungsMangement/BewegbaresObjekt.h"
#include "../../NaoModel/ODE/dJointID.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace Gelenke {

/************************************************************/
/**
 * 
 */
// Ein Gelenk mit einem Freiheitsgrad (ist ein bewegbares Objekt)
class Scharniergelenk : public NaoSimulation::Entwurf::NaoModel::BewegungsManagement::BewegbaresObjekt {
protected:

	/**
	 * 
	 */
	::NaoSimulation::Entwurf::NaoModel::ODE::dJointID odeGelenk;
public:
	Scharniergelenk() : odeGelenk(nullptr) {}

	::NaoSimulation::Entwurf::NaoModel::ODE::dJointID getODEGelenk();

	void setODEGelenk(::NaoSimulation::Entwurf::NaoModel::ODE::dJointID gelenk);
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Gelenke
} // of namespace NaoModel
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of Scharniergelenk class header
 ************************************************************/

#endif