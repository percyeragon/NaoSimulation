// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Entwurf_NaoController_Command_BeinCommand_LSprunggelenkRollen_BODY

/************************************************************
 LSprunggelenkRollen class body
 ************************************************************/

// include associated header file
#include "NaoSimulation/Entwurf/NaoController/Command/BeinCommand/LSprunggelenkRollen.h"

// Derived includes directives

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace BeinCommand {

void LSprunggelenkRollenCC::execute() {
    sprunggelenk->rolleSprunggelenk(winkel);
}

void LSprunggelenkRollenCC::setzeParameter(::PrimitiveTypes::Real winkel) {
    this->winkel = winkel;
}

}// of namespace BeinCommand
} // of namespace Command
} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of LSprunggelenkRollen class body
 ************************************************************/
