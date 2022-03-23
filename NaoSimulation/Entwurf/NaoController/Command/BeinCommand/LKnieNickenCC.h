// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_COMMAND_BEINCOMMAND_LKNIENICKENCC_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_COMMAND_BEINCOMMAND_LKNIENICKENCC_H

/************************************************************
 LKnieNickenCC class header
 ************************************************************/

#include "NaoSimulation/Entwurf/NaoController/Command/BeinCommand/Pkg_BeinCommand.h"

#include "NaoSimulation/Entwurf/NaoController/Command/GelenkCommand.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Bein/Knie.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace BeinCommand {

/************************************************************/
/**
 * 
 */
class LKnieNickenCC: public ::NaoSimulation::Entwurf::NaoController::Command::GelenkCommand {
private:
	::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Knie* knie;

	::PrimitiveTypes::Real winkel;
public:
	LKnieNickenCC(::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Knie* knie):
		knie(knie), winkel(0.0) {}

	void execute();

	void setzeParameter(::PrimitiveTypes::Real winkel);
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace BeinCommand
} // of namespace Command
} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of LKnieNickenCC class header
 ************************************************************/

#endif