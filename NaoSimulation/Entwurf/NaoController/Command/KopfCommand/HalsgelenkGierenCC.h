// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_COMMAND_KOPFCOMMAND_HALSGELENKGIERENCC_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_COMMAND_KOPFCOMMAND_HALSGELENKGIERENCC_H

/************************************************************
 HalsgelenkGierenCC class header
 ************************************************************/

#include "NaoSimulation/Entwurf/NaoController/Command/KopfCommand/Pkg_KopfCommand.h"

#include "NaoSimulation/Entwurf/NaoController/Command/GelenkCommand.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Kopf/Halsgelenk.h"
#include "PrimitiveTypes/Pkg_PrimitiveTypes.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace KopfCommand {

/************************************************************/
/**
 * 
 */
class HalsgelenkGierenCC: public ::NaoSimulation::Entwurf::NaoController::Command::GelenkCommand {
private:
	::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Halsgelenk* halsgelenk;

	::PrimitiveTypes::Real winkel;
public:
	HalsgelenkGierenCC(::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Halsgelenk* halsgelenk):
		halsgelenk(halsgelenk),
		winkel(0.0) {}

	void execute();

	void setzeParameter(::PrimitiveTypes::Real winkel);
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace KopfCommand
} // of namespace Command
} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of HalsgelenkGierenCC class header
 ************************************************************/

#endif
