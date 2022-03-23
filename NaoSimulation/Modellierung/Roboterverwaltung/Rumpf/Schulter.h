// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_RUMPF_SCHULTER_H
#define NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_RUMPF_SCHULTER_H

/************************************************************
 Schulter class header
 ************************************************************/

//#include "NaoSimulation/Modellierung/Roboterverwaltung/Rumpf/Pkg_Rumpf.h"

#include "Torso.h"
#include "../Arm/Oberarm.h"

/*
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Arm {
class Oberarm;
}
}
}
}
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Rumpf {
class Torso;
}
}
}
}
*/
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Rumpf {

/************************************************************/
/**
 * 
 */
class Schulter {
public:

	Schulter(Torso* torso, Arm::Oberarm* oberarm) :
		torso(torso), oberarm(oberarm) {}

	/**
	 * 
	 * @return result 
	 * @param torso 
	 * @param oberarm 
	 */
	static Schulter* erzeugeRechteSchulter(Torso* torso,
			::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Oberarm* oberarm,
			NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt);

	/**
	 * 
	 * @return result
	 * @param torso
	 * @param oberarm
	 */
	static Schulter* erzeugeLinkeSchulter(Torso* torso,
			::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Oberarm* oberarm,
			NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt);

private:

	/**
	 * 
	 */
	Torso* torso;

	/**
	 * 
	 */
	::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Oberarm* oberarm;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Rumpf
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Schulter class header
 ************************************************************/

#endif