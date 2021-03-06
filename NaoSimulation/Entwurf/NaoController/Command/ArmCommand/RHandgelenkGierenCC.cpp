// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Entwurf_NaoController_Command_ArmCommand_RHandgelenkGierenCC_BODY

/************************************************************
 RHandgelenkGierenCC class body
 ************************************************************/

// include associated header file
#include "NaoSimulation/Entwurf/NaoController/Command/ArmCommand/RHandgelenkGierenCC.h"

// Derived includes directives

namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
namespace ArmCommand {

void RHandgelenkGierenCC::execute() {
    handgelenk->giereHandgelenk(winkel);
}

void RHandgelenkGierenCC::setzeParameter(::PrimitiveTypes::Real winkel) {
    this->winkel = winkel;
}

} // of namespace ArmCommand
} // of namespace Command
} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of RHandgelenkGierenCC class body
 ************************************************************/
