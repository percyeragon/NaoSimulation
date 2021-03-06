// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_ROBOTER_H
#define NAOSIMULATION_MODELLIERUNG_ROBOTERVERWALTUNG_ROBOTER_H

/************************************************************
 Roboter class header
 ************************************************************/

//#include "NaoSimulation/Modellierung/Roboterverwaltung/Pkg_Roboterverwaltung.h"

#include "NaoSimulation/Entwurf/NaoModel/BewegungsMangement/BewegbaresObjekt.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Bein/Bein.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Arm/Arm.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Rumpf/Rumpf.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Kopf/Kopf.h"
#include "NaoSimulation/Entwurf/NaoModel/ODE/dWorldID.h"


namespace NaoSimulation {
namespace Modellierung {
namespace Roboterverwaltung {

/************************************************************/
/**
 * 
 */
class Roboter : NaoSimulation::Entwurf::NaoModel::BewegungsManagement::BewegbaresObjekt {
private:
	::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein *bein[2];

	::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm *arm[2];

	::NaoSimulation::Modellierung::Roboterverwaltung::Rumpf::Rumpf *rumpf;

	::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Kopf *kopf;
public:

	// Copy-Konstruktor
	Roboter(Roboter& other);
  
	Roboter(
		::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein* linkesBein,
		::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein* rechtesBein,
		::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm* linkenArm,
		::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm* rechtenArm,
		::NaoSimulation::Modellierung::Roboterverwaltung::Rumpf::Rumpf* rumpf,
		::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Kopf* kopf);

	// Dekonstruktor
	~Roboter();

	static Roboter* erzeugeRoboter(
		::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein* linkesBein,
		::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein* rechtesBein,
		::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm* linkenArm,
		::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm* rechtenArm,
		::NaoSimulation::Modellierung::Roboterverwaltung::Rumpf::Rumpf* rumpf,
		::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Kopf* kopf,
		NaoSimulation::Entwurf::NaoModel::ODE::dWorldID welt
	);

	::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein* getLinkesBein();

	::NaoSimulation::Modellierung::Roboterverwaltung::Bein::Bein* getRechtesBein();

	::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm* getLinkenArm();

	::NaoSimulation::Modellierung::Roboterverwaltung::Arm::Arm* getRechtenArm();

	::NaoSimulation::Modellierung::Roboterverwaltung::Rumpf::Rumpf* getRumpf();

	::NaoSimulation::Modellierung::Roboterverwaltung::Kopf::Kopf* getKopf();

	// ueberschreibe Std-Implementierung von bewegbaren Objekten
	bool inBewegung() override;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Roboterverwaltung
} // of namespace Modellierung
} // of namespace NaoSimulation

/************************************************************
 End of Roboter class header
 ************************************************************/

#endif