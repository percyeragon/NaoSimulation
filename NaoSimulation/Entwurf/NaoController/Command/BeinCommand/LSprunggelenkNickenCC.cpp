// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Entwurf_NaoController_Command_BeinCommand_LSprunggelenkNickenCC_BODY

/************************************************************
 LSprunggelenkNickenCC class body
 ************************************************************/

// include associated header file
#include "NaoSimulation/Entwurf/NaoController/Command/BeinCommand/LSprunggelenkNickenCC.h"

// Derived includes directives

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace BeinCommand {

void LSprunggelenkNickenCC::execute() {
    sprunggelenk->nickeSprunggelenk(winkel);
}

void LSprunggelenkNickenCC::setzeParameter(::PrimitiveTypes::Real winkel) {
    this->winkel = winkel;
}

}// of namespace BeinCommand
} // of namespace Command
} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of LSprunggelenkNickenCC class body
 ************************************************************/
