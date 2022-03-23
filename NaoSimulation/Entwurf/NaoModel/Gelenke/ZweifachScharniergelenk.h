// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_GELENKE_ZWEIFACHSCHARNIERGELENK_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_GELENKE_ZWEIFACHSCHARNIERGELENK_H

/************************************************************
 ZweifachScharniergelenk class header
 ************************************************************/

//#include "NaoSimulation/Entwurf/NaoModel/Gelenke/Pkg_Gelenke.h"

#include "../ODE/dBodyID.h"
#include "../ODE/dJointID.h"
#include "../BewegungsMangement/BewegbaresObjekt.h"


namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace Gelenke {

/************************************************************/
/**
 * 
 */
// Gelenk mit zwei Freiheitsgraden (ist ein bewegbares Objekt)
class ZweifachScharniergelenk : public NaoSimulation::Entwurf::NaoModel::BewegungsManagement::BewegbaresObjekt {
protected:
	/**
	 * 
	 */
	::NaoSimulation::Entwurf::NaoModel::ODE::dJointID odeGelenk1;

	/**
	 * 
	 */
	::NaoSimulation::Entwurf::NaoModel::ODE::dBodyID odeZwischenkoerper;

	/**
	 * 
	 */
	::NaoSimulation::Entwurf::NaoModel::ODE::dJointID odeGelenk2;
public:
	ZweifachScharniergelenk() : odeGelenk1(nullptr), odeZwischenkoerper(nullptr), odeGelenk2(nullptr) {}

	::NaoSimulation::Entwurf::NaoModel::ODE::dJointID getODEGelenk1();

	::NaoSimulation::Entwurf::NaoModel::ODE::dJointID getODEGelenk2();

	::NaoSimulation::Entwurf::NaoModel::ODE::dBodyID getODEZwischenkoerper();

	void setODEGelenk1(::NaoSimulation::Entwurf::NaoModel::ODE::dJointID gelenk);

	void setODEGelenk2(::NaoSimulation::Entwurf::NaoModel::ODE::dJointID gelenk);

	void setODEZwischenkoerper(::NaoSimulation::Entwurf::NaoModel::ODE::dBodyID koerper);
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
 End of ZweifachScharniergelenk class header
 ************************************************************/

#endif
