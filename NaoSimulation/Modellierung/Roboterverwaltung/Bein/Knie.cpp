// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Modellierung_Roboterverwaltung_Bein_Knie_BODY

/************************************************************
 Knie class body
 ************************************************************/

// include associated header file
#include "Knie.h"

namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {

Knie* Knie::erzeugeLinkesKnie(
        Oberschenkel* oberschenkel,
        Schienbein* schienbein,
        NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
) {
    Knie* knie = new Knie(
        0.0,
        linkesKnieRollenParams.minWinkel,
        linkesKnieRollenParams.maxWinkel,
        oberschenkel,
        schienbein
    );

    knie->setODEGelenk(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEGelenk(
        linkesKnieRollenParams.position,
        linkesKnieRollenParams.ausrichtung,
        linkesKnieRollenParams.maxGeschwindigkeit,
        knie->getRollWinkelMax(),
        knie->getRollWinkelMin(),
        welt,
        knie->getOberschenkel()->getOdeKoerperteil(),
        knie->getSchienbein()->getOdeKoerperteil()
    ));

    return knie;
}

Knie* Knie::erzeugeRechtesKnie(
        Oberschenkel* oberschenkel, 
        Schienbein* schienbein,
        NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
) {
    Knie* knie = new Knie(
        0.0,
        rechtesKnieRollenParams.minWinkel,
        rechtesKnieRollenParams.maxWinkel,
        oberschenkel,
        schienbein
    );

    knie->setODEGelenk(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEGelenk(
        rechtesKnieRollenParams.position,
        rechtesKnieRollenParams.ausrichtung,
        rechtesKnieRollenParams.maxGeschwindigkeit,
        knie->getRollWinkelMax(),
        knie->getRollWinkelMin(),
        welt,
        knie->getOberschenkel()->getOdeKoerperteil(),
        knie->getSchienbein()->getOdeKoerperteil()
    ));

    return knie;
}

// Muesste eigentlich "nickeKnie" heissen ...
void Knie::rolleKnie(::PrimitiveTypes::Real /*in*/winkel) {
	NaoSimulation::Entwurf::NaoModel::ODE::bewegeGelenk(odeGelenk, winkel, &bewegtSich);
}

::PrimitiveTypes::Real Knie::getRollWinkel() {
	return fg.getWinkel();
}

::PrimitiveTypes::Real Knie::getRollWinkelMax() {
	return fg.getWinkelMax();
}

::PrimitiveTypes::Real Knie::getRollWinkelMin() {
	return fg.getWinkelMin();
}

Oberschenkel* Knie::getOberschenkel() {
	return this->oberschenkel;
}

Schienbein* Knie::getSchienbein() {
	return this->schienbein;
}

} // of namespace Bein
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Knie class body
 ************************************************************/
