// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Entwurf_NaoController_Command_ArmCommand_REllenbogenGierenCC_BODY

/************************************************************
 REllenbogenGierenCC class body
 ************************************************************/

// include associated header file
#include "NaoSimulation/Entwurf/NaoController/Command/ArmCommand/REllenbogenGierenCC.h"

// Derived includes directives

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace ArmCommand {

void REllenbogenGierenCC::execute() {
    ellenbogen->giereEllenbogen(winkel);
}

void REllenbogenGierenCC::setzeParameter(::PrimitiveTypes::Real winkel) {
    this->winkel = winkel;
}

} // of namespace ArmCommand
} // of namespace Command
} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of REllenbogenGierenCC class body
 ************************************************************/
