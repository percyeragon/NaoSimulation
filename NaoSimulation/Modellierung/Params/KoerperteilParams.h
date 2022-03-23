#ifndef NAOSIMULATIONMODELLENTWURF_MODELLIERUNG_PARMS_KOERPERTEILPARAMS
#define NAOSIMULATIONMODELLENTWURF_MODELLIERUNG_PARMS_KOERPERTEILPARAMS

struct KoerperteilParams {
    // Eigenschaften fuer die Initialisierung des ODE-Koerperteils
    float masse;
    float position[3];
    float ausrichtung[3];
    
    // Eigenschaften, die fuer das Zeichnen mit Drawstuff benoetigt werden
    float radius;
    float hoehe;
};

#endif
