#ifndef NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_BEWEGUNGSMANAGEMENT_BEWEGBARESOBJEKT
#define NAOSIMULATIONMODELLENTWURF_ENTWURF_NAOMODEL_BEWEGUNGSMANAGEMENT_BEWEGBARESOBJEKT

namespace NaoSimulation {
namespace Entwurf {
namespace NaoModel {
namespace BewegungsManagement {

// BewegbareObjekte sind in der Simulation alle Gelenke des Roboters
// Um der "Welt" mitteilen zu koennen, dass sich Teile des Roboters gerade
// bewegen, werden auch die Klassen fuer Arme, Beine und den ganzen
// Roboter zu bewegbaren Objekten

class BewegbaresObjekt {
protected:
    // Flag, das anzeigt, ob sich ein Objekt gerade bewegt
    bool bewegtSich = false;
public:
    // Praedikat, das angibt, ob sich ein Objekt gerade in Bewegung befindet
    virtual bool inBewegung();
};

}}}}


#endif
