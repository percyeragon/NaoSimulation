// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define NaoSimulation_Modellierung_Roboterverwaltung_Bein_Sprunggelenk_BODY

/************************************************************
 Sprunggelenk class body
 ************************************************************/

// include associated header file
#include "Sprunggelenk.h"

// Derived includes directives


namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {

Sprunggelenk* Sprunggelenk::erzeugeLinkesSprunggelenk(
        Fuss* fuss,
        Schienbein* schienbein,
        NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
) {
    Sprunggelenk* sprunggelenk = new Sprunggelenk(
        fuss,
        schienbein,
        0.0,
        linkesSprunggelenkRollenParams.minWinkel,
        linkesSprunggelenkRollenParams.maxWinkel,
        0.0,
        linkesSprunggelenkNickenParams.minWinkel,
        linkesSprunggelenkNickenParams.maxWinkel
    );

    sprunggelenk->setODEZwischenkoerper(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEBody(
        linkesSprunggelenkZwischenkoerper.masse,
        linkesSprunggelenkZwischenkoerper.position,
        linkesSprunggelenkZwischenkoerper.ausrichtung,
        linkesSprunggelenkZwischenkoerper.radius,
        linkesSprunggelenkZwischenkoerper.hoehe,
        welt
    ));

    sprunggelenk->setODEGelenk1(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEGelenk(
        linkesSprunggelenkRollenParams.position,
        linkesSprunggelenkRollenParams.ausrichtung,
        linkesSprunggelenkRollenParams.maxGeschwindigkeit,
        linkesSprunggelenkRollenParams.maxWinkel,
        linkesSprunggelenkRollenParams.minWinkel,
        welt,
        sprunggelenk->getSchienbein()->getOdeKoerperteil(),
        sprunggelenk->getODEZwischenkoerper()
    ));
    sprunggelenk->setODEGelenk2(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEGelenk(
        linkesSprunggelenkNickenParams.position,
        linkesSprunggelenkNickenParams.ausrichtung,
        linkesSprunggelenkNickenParams.maxGeschwindigkeit,
        linkesSprunggelenkNickenParams.maxWinkel,
        linkesSprunggelenkNickenParams.minWinkel,
        welt,
        sprunggelenk->getODEZwischenkoerper(),
        sprunggelenk->getFuss()->getOdeKoerperteil()
    ));
    
    return sprunggelenk;
}

Sprunggelenk* Sprunggelenk::erzeugeRechtesSprunggelenk(
        Fuss* fuss,
        Schienbein* schienbein,
        NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
) {
    Sprunggelenk* sprunggelenk = new Sprunggelenk(
        fuss,
        schienbein,
        0.0,
        rechtesSprunggelenkRollenParams.minWinkel,
        rechtesSprunggelenkRollenParams.maxWinkel,
        0.0,
        rechtesSprunggelenkNickenParams.minWinkel,
        rechtesSprunggelenkNickenParams.maxWinkel
    );

    sprunggelenk->setODEZwischenkoerper(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEBody(
        rechtesSprunggelenkZwischenkoerper.masse,
        rechtesSprunggelenkZwischenkoerper.position,
        rechtesSprunggelenkZwischenkoerper.ausrichtung,
        rechtesSprunggelenkZwischenkoerper.radius,
        rechtesSprunggelenkZwischenkoerper.hoehe,
        welt
    ));

    sprunggelenk->setODEGelenk1(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEGelenk(
        rechtesSprunggelenkRollenParams.position,
        rechtesSprunggelenkRollenParams.ausrichtung,
        rechtesSprunggelenkRollenParams.maxGeschwindigkeit,
        rechtesSprunggelenkRollenParams.maxWinkel,
        rechtesSprunggelenkRollenParams.minWinkel,
        welt,
        sprunggelenk->getSchienbein()->getOdeKoerperteil(),
        sprunggelenk->getODEZwischenkoerper()
    ));
    sprunggelenk->setODEGelenk2(NaoSimulation::Entwurf::NaoModel::ODE::erzeugeODEGelenk(
        rechtesSprunggelenkNickenParams.position,
        rechtesSprunggelenkNickenParams.ausrichtung,
        rechtesSprunggelenkNickenParams.maxGeschwindigkeit,
        rechtesSprunggelenkNickenParams.maxWinkel,
        rechtesSprunggelenkNickenParams.minWinkel,
        welt,
        sprunggelenk->getODEZwischenkoerper(),
        sprunggelenk->getFuss()->getOdeKoerperteil()
    ));
    
    return sprunggelenk;
}

void Sprunggelenk::nickeSprunggelenk(::PrimitiveTypes::Real /*in*/winkel) {
	// ODE-Gelenk2 ist fuer das 'Nicken' zustaendig
    NaoSimulation::Entwurf::NaoModel::ODE::bewegeGelenk(odeGelenk2, winkel, &bewegtSich);
}

/**
 * 
 * @return result 
 */
::PrimitiveTypes::Real Sprunggelenk::getNickWinkel() {
	return fg[0].getWinkel();
}

/**
 * 
 * @return result 
 */
::PrimitiveTypes::Real Sprunggelenk::getNickWinkelMax() {
	return fg[0].getWinkelMax();
}

/**
 * 
 * @return result 
 */
::PrimitiveTypes::Real Sprunggelenk::getNickWinkelMin() {
	return fg[0].getWinkelMin();
}

/**
 * 
 * @param winkel 
 */
void Sprunggelenk::rolleSprunggelenk(::PrimitiveTypes::Real /*in*/winkel) {
	// ODE-Gelenk1 ist fuer das 'Rollen' zustaendig
    NaoSimulation::Entwurf::NaoModel::ODE::bewegeGelenk(odeGelenk1, winkel, &bewegtSich);
}

/**
 * 
 * @return result 
 */
::PrimitiveTypes::Real Sprunggelenk::getRollWinkel() {
	return fg[1].getWinkel();
}

/**
 * 
 * @return result 
 */
::PrimitiveTypes::Real Sprunggelenk::getRollWinkelMax() {
	return fg[1].getWinkelMax();
}

/**
 * 
 * @return result 
 */
::PrimitiveTypes::Real Sprunggelenk::getRollWinkelMin() {
	return fg[1].getWinkelMin();
}

Schienbein* Sprunggelenk::getSchienbein() {
	return this->schienbein;
}

Fuss* Sprunggelenk::getFuss() {
	return this->fuss;
}

} // of namespace Bein
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Sprunggelenk class body
 ************************************************************/
