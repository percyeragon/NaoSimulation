// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_BEIN_BEIN_H
#define NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_BEIN_BEIN_H

/************************************************************
 Bein class header
 ************************************************************/

//#include "NaoSimulation/Modellierung/Roboterverwaltung/Bein/Pkg_Bein.h"

#include "Oberschenkel.h"
#include "Schienbein.h"
#include "Fuss.h"
#include "Knie.h"
#include "Sprunggelenk.h"

/*
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {
class Fuss;
}
}
}
}
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {
class Knie;
}
}
}
}
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {
class Oberschenkel;
}
}
}
}
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {
class Schienbein;
}
}
}
}
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {
class Sprunggelenk;
}
}
}
}
*/
namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {
namespace Bein {

/************************************************************/
/**
 * 
 */
class Bein : public NaoSimulation::Entwurf::NaoModel::BewegungsManagement::BewegbaresObjekt {
public:
	// Copy-Konstruktor
	Bein(Bein& bein) :
		schienbein(new Schienbein(*bein.getSchienbein())),
		oberschenkel(new Oberschenkel(*bein.getOberschenkel())),
		fuss(new Fuss(*bein.getFuss())),
		knie(new Knie(*bein.getKnie(), oberschenkel, schienbein)),
		sprunggelenk(new Sprunggelenk(*bein.getSprunggelenk(), schienbein, fuss)) {}

	// Konstruktor
	Bein(Oberschenkel* oberschenkel, Knie* knie, Schienbein* schienbein, Sprunggelenk* sprunggelenk, Fuss* fuss):
		oberschenkel(oberschenkel), knie(knie), schienbein(schienbein), sprunggelenk(sprunggelenk), fuss(fuss) {}

	// Dekonstruktor
	~Bein();

	static Bein* erzeugeLinkesBein(
		Oberschenkel* oberschenkel,
		Knie* knie,
		Schienbein* schienbein,
		Sprunggelenk* sprunggelenk,
		Fuss* fuss,
		NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
	);
	
	static Bein* erzeugeRechtesBein(
		Oberschenkel* oberschenkel,
		Knie* knie,
		Schienbein* schienbein,
		Sprunggelenk* sprunggelenk,
		Fuss* fuss,
		NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
	);

	Oberschenkel* getOberschenkel();

	Knie* getKnie();

	Schienbein* getSchienbein();

	Sprunggelenk* getSprunggelenk();

	Fuss* getFuss();

	// ueberschreibe die Std-Implementierung von bewegbaren Objekten
	bool inBewegung() override;

private:

	/**
	 * 
	 */
	Oberschenkel *oberschenkel;

	/**
	 * 
	 */
	Fuss *fuss;

	/**
	 * 
	 */
	Schienbein *schienbein;

	/**
	 * 
	 */
	Knie *knie;

	/**
	 * 
	 */
	Sprunggelenk *sprunggelenk;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Bein
} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Bein class header
 ************************************************************/

#endif