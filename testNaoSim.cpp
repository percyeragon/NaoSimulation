#include "NaoSimulation/Entwurf/NaoController/NaoAPI.h"
#include "NaoSimulation/Entwurf/NaoController/Pkg_NaoController.h"
#include "NaoSimulation/Entwurf/NaoModel/Welt/Welt.h"
#include "NaoSimulation/Modellierung/Roboterverwaltung/Roboter.h"
#include <cstdio>
#include <iostream>
#include <math.h>
#include <string>
#include <map>
#include <ode/ode.h>
#include <assert.h>
inline float grad_nach_rad(float grad) {
	return grad * M_PI / 180.0f;
}
inline float rad_nach_grad(float rad) {
	return rad * 180.0f / M_PI;
}
bool isCorrect(float soll, float haben) {
	if ((soll < 0 && haben > 0) || (soll > 0 && haben < 0))
		return false;
	soll = soll < 0 ? -soll : soll;
	haben = haben < 0 ? -haben : haben;
	float min = soll - 1;
	float max = soll + 1;
	return (haben > min && haben < max);
}
void operate(float inW,NaoSimulation::Entwurf::NaoController::GelenkBewegung op,NaoSimulation::Entwurf::NaoController::NaoAPI *m,std::string opname, dJointID gelenk) {
	float minwinkel = rad_nach_grad(dJointGetHingeParam(gelenk, dParamLoStop));
	float maxwinkel = rad_nach_grad(dJointGetHingeParam(gelenk, dParamHiStop));
	float gelenkWinkel;
	std::cout << "Eingabe ist zu klein: " << opname << "\n Gelenk sollte bei MinWinkel stoppen: " << minwinkel << "\n";
	m->setAngle(op, grad_nach_rad(-1000), 1.0);
	gelenkWinkel = rad_nach_grad(dJointGetHingeAngle(gelenk));
	std::cout << "Winkel wurde gesetzt auf: " << gelenkWinkel << " . Winkeleinstellung ist: " << (isCorrect(minwinkel, gelenkWinkel) ? "korrekt" : "falsch") << "\n\n";
	assert(isCorrect(minwinkel, gelenkWinkel));
	std::cout << "Eingabe ist zu groß: " << opname << "\n Gelenk sollte bei MaxWinkel stoppen: " << maxwinkel << " \n";
	m->setAngle(op, grad_nach_rad(100000), 1.0);
	gelenkWinkel = rad_nach_grad(dJointGetHingeAngle(gelenk));
	std::cout << "Winkel wurde gesetzt auf: " << gelenkWinkel << " . Winkeleinstellung ist: " << (isCorrect(maxwinkel, gelenkWinkel) ? "korrekt" : "falsch") << "\n\n";
	assert(isCorrect(maxwinkel, gelenkWinkel));
	std::cout << "Eingabe ist im Bereich " << opname << " \n";
	m->setAngle(op, grad_nach_rad(inW), 1);
	gelenkWinkel = rad_nach_grad(dJointGetHingeAngle(gelenk));
	std::cout << "Winkel wurde gesetzt auf: " << gelenkWinkel << " . Winkeleinstellung ist: " << (isCorrect(inW, gelenkWinkel) ? "korrekt" : "falsch") << "\n\n";
	assert(isCorrect(inW, gelenkWinkel));
}
int main(int argc, char **argv) {
	std::string i;
	NaoSimulation::Entwurf::NaoController::NaoAPI m;
	m.init();
	NaoSimulation::Entwurf::NaoModel::Welt::Welt *welt;
	welt = m.getWelt();
	NaoSimulation::Modellierung::Roboterverwaltung::Roboter *nao =welt->getRoboter();
	std::cin >> i;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	operate(1,NaoSimulation::Entwurf::NaoController::HalsgelenkNicken,&m, "HalsgelenkNicken",nao->getKopf()->getHalsgelenk()->getODEGelenk2());
	operate(1,NaoSimulation::Entwurf::NaoController::HalsgelenkGieren,&m, "HalsgelenkNicken",nao->getKopf()->getHalsgelenk()->getODEGelenk1());
	operate(60, NaoSimulation::Entwurf::NaoController::LKnieNicken,&m, "LKnieNicken",nao->getLinkesBein()->getKnie()->getODEGelenk());
	operate(60, NaoSimulation::Entwurf::NaoController::RKnieNicken,&m, "RKnieNicken",nao->getRechtesBein()->getKnie()->getODEGelenk());
	operate(4,NaoSimulation::Entwurf::NaoController::LSprunggelenkNicken,&m, "LSprunggelenkNicken",nao->getLinkesBein()->getSprunggelenk()->getODEGelenk2());
	operate(-4,NaoSimulation::Entwurf::NaoController::RSprunggelenkNicken,&m, "RSprunggelenkNicken",nao->getRechtesBein()->getSprunggelenk()->getODEGelenk2());
	operate(4,NaoSimulation::Entwurf::NaoController::LSprunggelenkRollen,&m, "LSprunggelenkRollen",nao->getLinkesBein()->getSprunggelenk()->getODEGelenk1());
	operate(-4,NaoSimulation::Entwurf::NaoController::RSprungelenkRollen,&m, "RSprungelenkRollen",nao->getRechtesBein()->getSprunggelenk()->getODEGelenk1());
	operate(4,NaoSimulation::Entwurf::NaoController::LEllenbogenGieren,&m, "LEllenbogenGieren",nao->getLinkenArm()->getEllenbogen()->getODEGelenk2());
	operate(4,NaoSimulation::Entwurf::NaoController::REllenbogenGieren,&m, "REllenbogenGieren",nao->getRechtenArm()->getEllenbogen()->getODEGelenk2());
	operate(-40,NaoSimulation::Entwurf::NaoController::LEllenbogenRollen,&m, "LEllenbogenRollen",nao->getLinkenArm()->getEllenbogen()->getODEGelenk1());
	operate(40,NaoSimulation::Entwurf::NaoController::REllenbogenRollen,&m, "REllenbogenRollen",nao->getRechtenArm()->getEllenbogen()->getODEGelenk1());
	operate(2,NaoSimulation::Entwurf::NaoController::LHandgelenkGieren,&m, "LHandgelenkGieren",nao->getLinkenArm()->getHandgelenk()->getODEGelenk());
	operate(2,NaoSimulation::Entwurf::NaoController::RHandgelenkGieren,&m, "RHandgelenkGieren",nao->getRechtenArm()->getHandgelenk()->getODEGelenk());
	std::cout << "Test von Version 4 ist abgeschlossen, q drücken um die Simualtion zu beenden" << std::endl;
	getchar();
	return 0;
}