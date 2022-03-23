
#include "NaoSimulation/Entwurf/NaoView/Roboteranzeige/Koerperteilanzeige/KoerperteilZeichner.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoView {
namespace Roboteranzeige {
namespace Koerperteilanzeige {

void KoerperteilZeichner::zeichneKoerperteil(NaoSimulation::Entwurf::NaoModel::Koerperteile::Koerperteil& koerperteil) {
    // Setze die Textur des Koerperteils
    dsSetTexture(DS_WOOD);
    // Setze die Farbe des Koerperteils
    dsSetColor(1, 1, 0);
    
    // Zeichne das Koerperteil als Zylinder
    dsDrawCylinderD(
        dBodyGetPosition(koerperteil.getOdeKoerperteil()),
        dBodyGetRotation(koerperteil.getOdeKoerperteil()),
		koerperteil.getHoehe(), koerperteil.getRadius()
    );
}

}}}}}
