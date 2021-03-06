// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_NAOAPI_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOCONTROLLER_NAOAPI_H

/************************************************************
 NaoAPI class header
 ************************************************************/

#include <iostream>

#include "NaoSimulation/Entwurf/NaoController/Command/Command.h"
#include "NaoSimulation/Entwurf/NaoController/Command/GelenkCommand.h"
#include "NaoSimulation/Entwurf/NaoModel/PhysikSim.h"

#include "NaoSimulation/Entwurf/NaoView/WeltZeichner.h"

#include "NaoSimulation/Entwurf/NaoController/Pkg_NaoController.h"
#include "PrimitiveTypes/Pkg_PrimitiveTypes.h"

/*
namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
class Command;
}
}
}
}
namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {
namespace Command {
class GelenkCommand;
}
}
}
}
*/
namespace NaoSimulation {
namespace Entwurf {
namespace NaoController {

/************************************************************/
/**
 * 
 */
class NaoAPI {
private:
	// Speichert das Objekt der Physik-Simulation (Nutzung, um Physik-Thread zu beenden)
	NaoSimulation::Entwurf::NaoModel::PhysikSim* pSim;
	// Speichert das Objekt, dass in festen Abstaenden die Welt neu zeichnet (Nutzung um Zeichen-Thread zu beenden)
	NaoSimulation::Entwurf::NaoView::WeltZeichner* wZeichner;

	// 2 Kommandos fuer linkes/rechtes Knie nicken + 4 Kommandos fuer linkes/rechtes Sprunggelenk nicken/rollen
	static const unsigned int NUM_OF_BEIN_COMMANDS = 6;
	// 4 Kommandos fuer linken/rechten Ellenbogen gieren/rollen + 2 Kommandos fuer linkes/rechtes Handgelenk gieren
	// + 4 Kommandos fuer linke/rechte Hand oeffnen/schliessen
	static const unsigned int NUM_OF_ARM_COMMANDS = 10;
	// Kommandos fuer den Rumpf (noch keine) ... [ANPASSEN]
	static const unsigned int NUM_OF_RUMPF_COMMANDS = 0;
	// Kommandos fuer den Kopf (Halsgelenk gieren +nicken)
	static const unsigned int NUM_OF_KOPF_COMMANDS = 2;

	// Alle Kommandos zusammen ...
	static const unsigned int NUM_OF_COMMANDS = NaoAPI::NUM_OF_BEIN_COMMANDS + NaoAPI::NUM_OF_ARM_COMMANDS + NaoAPI::NUM_OF_RUMPF_COMMANDS + NaoAPI::NUM_OF_KOPF_COMMANDS;

	::NaoSimulation::Entwurf::NaoController::Command::GelenkCommand *gelenkcommand[NaoAPI::NUM_OF_COMMANDS];

	::NaoSimulation::Entwurf::NaoController::Command::Command *commandInit;
public:
	void setAngle(GelenkBewegung bewegung,
			::PrimitiveTypes::Real absWinkel,
			::PrimitiveTypes::Real maxGeschwindingkeit);

	void init();
	NaoSimulation::Entwurf::NaoModel::Welt::Welt* getWelt();
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace NaoController
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of NaoAPI class header
 ************************************************************/

#endif
