#ifndef NAOSIMULATIONMODELLENTWURF_MODELLIERUNG_PARMS_GELENKPARAMS
#define NAOSIMULATIONMODELLENTWURF_MODELLIERUNG_PARMS_GELENKPARAMS

struct GelenkParams {
    float position[3];
    float ausrichtung[3];
    float maxGeschwindigkeit;
    float maxWinkel;
    float minWinkel;
};

#endif
