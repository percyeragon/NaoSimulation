#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOVIEW_ROBOTERANZEIGE_KOERPERTEILANZEIGE_KOERPERTEILZEICHNER
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOVIEW_ROBOTERANZEIGE_KOERPERTEILANZEIGE_KOERPERTEILZEICHNER

#include <drawstuff/drawstuff.h>
#include <ode/ode.h>

#include "../../../NaoModel/Koerperteile/Koerperteil.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoView {
namespace Roboteranzeige {
namespace Koerperteilanzeige {

// Vereinheitlicht das Zeichnen von Koerperteilen.
// Sollte fuer das Zeichnen des Rumpfes wiederverwendet werden
class KoerperteilZeichner {
public:
    static void zeichneKoerperteil(NaoSimulation::Entwurf::NaoModel::Koerperteile::Koerperteil& koerperteil);
};

}}}}}

#endif
