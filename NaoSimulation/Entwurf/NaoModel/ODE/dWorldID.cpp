#include "dWorldID.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace ODE {

dWorldID erzeugeODEWelt() {
    dWorldID welt = dWorldCreate();

    return welt;
}

}}}}
