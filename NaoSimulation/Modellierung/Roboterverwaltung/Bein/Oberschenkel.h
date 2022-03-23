// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_BEIN_OBERSCHENKEL_H
#define NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_BEIN_OBERSCHENKEL_H

/************************************************************
 Oberschenkel class header
 ************************************************************/

//#include "NaoSimulation/Modellierung/Roboterverwaltung/Bein/Pkg_Bein.h"

#include "../../../Entwurf/NaoModel/Koerperteile/Koerperteil.h"
#include "../../Params/RoboterParamSettings.h"


namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {

/************************************************************/
/**
 * 
 */
class Oberschenkel: public ::NaoSimulation::Entwurf::NaoModel::Koerperteile::Koerperteil {
public:

	/**
	 * 
	 * @return result 
	 */
	static Oberschenkel* erzeugeLinkenOberschenkel(NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt);
	static Oberschenkel* erzeugeRechtenOberschenkel(NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt);

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Bein
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Oberschenkel class header
 ************************************************************/

#endif
