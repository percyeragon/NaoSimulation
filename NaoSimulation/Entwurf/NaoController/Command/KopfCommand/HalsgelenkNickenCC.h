// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_COMMAND_KOPFCOMMAND_HALSGELENKNICKENCC_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_COMMAND_KOPFCOMMAND_HALSGELENKNICKENCC_H

/************************************************************
 HalsgelenkNickenCC class header
 ************************************************************/

#include "NaoSimulation/Entwurf/NaoController/Command/KopfCommand/Pkg_KopfCommand.h"

#include "NaoSimulation/Entwurf/NaoController/Command/GelenkCommand.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Kopf/Halsgelenk.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace KopfCommand {

/************************************************************/
/**
 * 
 */
class HalsgelenkNickenCC: public ::NaoSimulation::Entwurf::NaoController::Command::GelenkCommand {
private:
	::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Halsgelenk* halsgelenk;

::PrimitiveTypes::Real winkel;
public:
	HalsgelenkNickenCC(::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Halsgelenk* halsgelenk):
		halsgelenk(halsgelenk), winkel(0.0) {}

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
 End of HalsgelenkNickenCC class header
 ************************************************************/

#endif