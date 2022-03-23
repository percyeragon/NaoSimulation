// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOVIEW_MODELOBSERVER_H
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOVIEW_MODELOBSERVER_H

/************************************************************
 ModelObserver class header
 ************************************************************/

#include "NaoSimulation/Entwurf/NaoModel/Welt/Welt.h"
#include "NaoSimulation/Entwurf/NaoView/WeltZeichner.h"
#include "NaoSimulation/Entwurf/NaoObserver/Observer.h"

/*
namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace Welt {
class Welt;
}
}
}
}
*/
namespace NaoSimulation {
namespace Entwurf {
namespace NaoView {

/************************************************************/
/**
 * 
 */
class ModelObserver : public NaoSimulation::Entwurf::NaoObserver::Observer<NaoSimulation::Entwurf::NaoModel::Welt::Welt> {
private:
	WeltZeichner* worlddrawer;
public:
	ModelObserver() :
		worlddrawer(new NaoSimulation::Entwurf::NaoView::WeltZeichner()) {}
	
	void onNotify(NaoSimulation::Entwurf::NaoModel::Welt::Welt* welt) {
		worlddrawer->ueberschreibeWelt(welt);
	}

	WeltZeichner* getWeltZeichner() {
		return worlddrawer;
	}
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace NaoView
} // of namespace Entwurf
} // of namespace NaoSimulation

/************************************************************
 End of ModelObserver class header
 ************************************************************/

#endif
