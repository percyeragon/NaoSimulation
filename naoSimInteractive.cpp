#include "NaoSimulation/Entwurf/NaoController/NaoAPI.h"
#include <cstdio>
#include <iostream>
#include <math.h>
#include <string>
#include <map>
#include "NaoSimulation/Entwurf/NaoController/Pkg_NaoController.h"

inline float grad_nach_rad(float grad) {
	return grad * M_PI / 180.0f;
}
void operate(
		NaoSimulation::Entwurf::NaoController::GelenkBewegung op,
		NaoSimulation::Entwurf::NaoController::NaoAPI *m) {
	std::string inputWinkel;
	float inWinkel;
	std::cout << "Winkel in Grad eingeben:" << std::endl;
	std::cin >> inputWinkel;
	try {
		inWinkel = std::stof(inputWinkel);
	} catch (std::invalid_argument &e) {
		std::cout << "Bitte eine Zahl eingeben!\n";
		return;
	}
	m->setAngle(op, grad_nach_rad(inWinkel), 1.0);
}

bool beende(){
    std::cout << "Kommando wurde nicht gefunden. Wollen sie die Simulation beenden? y/n" << std::endl;
    std::string input;
    std::cin >> input;
    while(input.compare("y")!=0&& input.compare("n")!=0){
        std::cout << "Bitte y oder n eingeben um fortzufahren" << std::endl;
        std::cin >> input;
    }
    if(input.compare("y")==0)
        return true;
    else
        return false;
}



int main(int argc, char **argv) {
    static const std::map<std::string, NaoSimulation::Entwurf::NaoController::GelenkBewegung> Befehle {
	{ "3l",NaoSimulation::Entwurf::NaoController::LKnieNicken },{ "3r", NaoSimulation::Entwurf::NaoController::RKnieNicken },
	{ "4ln", NaoSimulation::Entwurf::NaoController::LSprunggelenkNicken },{ "4rn", NaoSimulation::Entwurf::NaoController::RSprunggelenkNicken },
	{ "4lr", NaoSimulation::Entwurf::NaoController::LSprunggelenkRollen },{ "4rr", NaoSimulation::Entwurf::NaoController::RSprungelenkRollen },
	{ "1lg", NaoSimulation::Entwurf::NaoController::LEllenbogenGieren },{ "1rg", NaoSimulation::Entwurf::NaoController::REllenbogenGieren },
	{ "1lr", NaoSimulation::Entwurf::NaoController::LEllenbogenRollen },{ "1rr", NaoSimulation::Entwurf::NaoController::REllenbogenRollen },
	{ "2lg", NaoSimulation::Entwurf::NaoController::LHandgelenkGieren },{ "2rg", NaoSimulation::Entwurf::NaoController::RHandgelenkGieren },
	{ "2lo", NaoSimulation::Entwurf::NaoController::LHandOeffnen },{ "2ro", NaoSimulation::Entwurf::NaoController::RHandOeffnen },
	{ "2ls", NaoSimulation::Entwurf::NaoController::LHandSchliessen },{ "2rs", NaoSimulation::Entwurf::NaoController::RHandSchliessen },
	{ "5n", NaoSimulation::Entwurf::NaoController::HalsgelenkNicken },{ "5g", NaoSimulation::Entwurf::NaoController::HalsgelenkGieren }
	};
	std::string i;
	NaoSimulation::Entwurf::NaoController::NaoAPI m;
	m.init();
	std::cout << "Kommando eingeben:\n" << std::endl;
	std::cin >> i;
	auto itr = Befehle.find(i);
	while(itr == Befehle.end()){
		std::cout << "*Bitte gültiges Kommando eingebn oder q um die Simulation zu beenden.\n" << std::endl;
		std::cin >> i;
		if(i.compare("q")== 0)
			return 0;
		itr = Befehle.find(i);
	}
	std::cin.clear();
	std::cin.ignore(100, '\n');
	NaoSimulation::Entwurf::NaoController::GelenkBewegung input ;
	input = (itr != Befehle.end()) ? itr->second : NaoSimulation::Entwurf::NaoController::Quit;
	while (true) {
		switch (input) {
		case NaoSimulation::Entwurf::NaoController::HalsgelenkGieren:operate(NaoSimulation::Entwurf::NaoController::HalsgelenkGieren,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::HalsgelenkNicken:operate(NaoSimulation::Entwurf::NaoController::HalsgelenkNicken,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LEllenbogenGieren:operate(NaoSimulation::Entwurf::NaoController::LEllenbogenGieren,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LEllenbogenRollen:operate(NaoSimulation::Entwurf::NaoController::LEllenbogenRollen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::REllenbogenGieren:operate(NaoSimulation::Entwurf::NaoController::REllenbogenGieren,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::REllenbogenRollen:operate(NaoSimulation::Entwurf::NaoController::REllenbogenRollen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LHandgelenkGieren:operate(NaoSimulation::Entwurf::NaoController::LHandgelenkGieren,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::RHandgelenkGieren:operate(NaoSimulation::Entwurf::NaoController::RHandgelenkGieren,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LHandSchliessen:operate(NaoSimulation::Entwurf::NaoController::LHandSchliessen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::RHandSchliessen:operate(NaoSimulation::Entwurf::NaoController::RHandSchliessen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LHandOeffnen:operate(NaoSimulation::Entwurf::NaoController::LHandOeffnen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::RHandOeffnen:operate(NaoSimulation::Entwurf::NaoController::RHandOeffnen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LKnieNicken:operate(NaoSimulation::Entwurf::NaoController::LKnieNicken,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::RKnieNicken:operate(NaoSimulation::Entwurf::NaoController::RKnieNicken,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LSprunggelenkRollen:operate(NaoSimulation::Entwurf::NaoController::LSprunggelenkRollen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::LSprunggelenkNicken:operate(NaoSimulation::Entwurf::NaoController::LSprunggelenkNicken,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::RSprungelenkRollen:operate(NaoSimulation::Entwurf::NaoController::RSprungelenkRollen,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::RSprunggelenkNicken:operate(NaoSimulation::Entwurf::NaoController::RSprunggelenkNicken,&m);
			break;
		case NaoSimulation::Entwurf::NaoController::Quit:
			if(beende())
                return 0;
            else{
                std::cout << "Valide Kommandos sind in der Hausarbeit zu finden\n";
                break;
            }
		}
		std::cout
				<< "Kommando eingeben um fortzufahren."
				<< std::endl;
		std::cin >> i;
		itr = Befehle.find(i);
		input = (itr != Befehle.end()) ? itr->second : NaoSimulation::Entwurf::NaoController::Quit;;
	}
	return 0;
}