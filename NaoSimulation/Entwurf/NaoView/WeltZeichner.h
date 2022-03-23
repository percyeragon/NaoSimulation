// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOVIEW_WELTZEICHNER_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOVIEW_WELTZEICHNER_H

/************************************************************
 WeltZeichner class header
 ************************************************************/

#include <thread>
#include <drawstuff/drawstuff.h>

#include <stdlib.h>

#include "NaoSimulation/Entwurf/NaoModel/Welt/Welt.h"
#include "NaoSimulation/Entwurf/NaoView/Pkg_NaoView.h"
#include "NaoSimulation/Entwurf/NaoView/Roboteranzeige/RoboterZeichner.h"

namespace NaoSimulation {
namespace Entwurf {
namespace NaoView {

/************************************************************/
/**
 * 
 */
class WeltZeichner {
private:

	static NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt;

	std::thread* grLopp_thread;
public:
	WeltZeichner();

	// Wird nicht benutzt!!!
	void grLoop();

	// Simulationsschleife fuer DRAWSTUFF
	static void DRAWSTUFF_simLoop(int pause);
	// STOP-Kommando DRAWSTUFF
	static void DRAWSTUFF_stop();
	// START-Kommando DRAWSTUFF
	static void DRAWSTUFF_start();
	// Kommando-Kommando DRAWSTUFF
	static void DRAWSTUFF_command(int key);

	void ueberschreibeWelt(::NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt);

	static void zeichneWelt(::NaoSimulation::Entwurf::NaoModel::Welt::Welt* /*in*/welt);
	
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace NaoView
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of WeltZeichner class header
 ************************************************************/

#endif