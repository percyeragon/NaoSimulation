
#include "RoboterParamSettings.h"

KoerperteilParams linkerOberschenkelParams = {
    // Masse
    0.38968,
    // Position
    {-2.5, 0, 5.25},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2.5
};

KoerperteilParams rechterOberschenkelParams = {
 // Masse
    0.38968,
    // Position
    {2.5, 0, 5.25},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2.5
};

KoerperteilParams linkesSchienbeinParams = {
    // Masse
    0.30142,
    // Position
    {-2.5, 0, 2.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2
};

KoerperteilParams rechtesSchienbeinParams = {
    // Masse
    0.30142,
    // Position
    {2.5, 0, 2.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2
};

KoerperteilParams linkerFussParams = {
    // Masse
    0.17184,
    // Position
    {-2.5, 0, 0.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    1
};

KoerperteilParams rechterFussParams = {
    // Masse
    0.17184,
    // Position
    {2.5, 0, 0.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    1
};

GelenkParams linkesKnieRollenParams = {
    // Position
    {-2.5, 0, 3.75},
    // Ausrichtung (Nicken, NICHT Rollen!!!)
    {nicken[0], nicken[1], nicken[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    2.112528,
    // Minimalwinkel
    -0.092346
};

GelenkParams rechtesKnieRollenParams = {
    // Position
    {2.5, 0, 3.75},
    // Ausrichtung (Nicken, NICHT Rollen!!!)
    {nicken[0], nicken[1], nicken[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    2.120198,
    // Minimalwinkel
    -0.103083
};

GelenkParams linkesSprunggelenkRollenParams = {
    // Position
    {-2.5, 0, 1.375},
    // Ausrichtung (Rollen)
    {rollen[0], rollen[1], rollen[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    0.769001,
    // Minimalwinkel
    -0.397880
};

GelenkParams rechtesSprunggelenkRollenParams = {
    // Position
    {2.5, 0, 1.375},
    // Ausrichtung (Rollen)
    {rollen[0], rollen[1], rollen[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    0.397935,
    // Minimalwinkel
    -0.768992
};

KoerperteilParams linkesSprunggelenkZwischenkoerper = {
    // Masse
    1,
    // Position
    {-2.5, 0, 1.25},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.01,
    // Hoehe
    0.01
};

KoerperteilParams rechtesSprunggelenkZwischenkoerper = {
    // Masse
    1,
    // Position
    {2.5, 0, 1.25},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.01,
    // Hoehe
    0.01
};

GelenkParams linkesSprunggelenkNickenParams = {
    // Position
    {-2.5, 0, 1.125},
    // Ausrichtung (Nicken)
    {nicken[0], nicken[1], nicken[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    0.922747,
    // Minimalwinkel
    -1.189516
};

GelenkParams rechtesSprunggelenkNickenParams = {
    // Position
    {2.5, 0, 1.125},
    // Ausrichtung (Nicken)
    {nicken[0], nicken[1], nicken[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    0.932056,
    // Minimalwinkel
    -1.186448
};

KoerperteilParams linkerOberarmParams = {
    // Masse
    0.15777,
    // Position
    {-4.0, 0, 12},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2.0
};

KoerperteilParams rechterOberarmParams = {
    // Masse
    0.15777,
    // Position
    {4.0, 0, 12},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2.0
};

KoerperteilParams linkerUnterarmParams = {
    // Masse
    0.07761,
    // Position
    {-4.0, 0, 9.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2.0
};

KoerperteilParams rechterUnterarmParams = {
    // Masse
    0.07761,
    // Position
    {4.0, 0, 9.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    2.0
};

KoerperteilParams linkeHandParams = {
    // Masse
    0.18533,
    // Position
    {-4.0, 0, 7.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    1.0
};

KoerperteilParams rechteHandParams = {
    // Masse
    0.18533,
    // Position
    {4.0, 0, 7.5},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    1.0
};

GelenkParams linkerEllenbogenRollenParams = {
    // Position
    {-4.0, 0, 10.875},
    // Ausrichtung (Nicken)
    {rollen[0], rollen[1], rollen[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    -0.0349,
    // Minimalwinkel
    -1.5446
};

GelenkParams rechterEllenbogenRollenParams = {
    // Position
    {4.0, 0, 10.875},
    // Ausrichtung (Nicken)
    {rollen[0], rollen[1], rollen[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    1.5446,
    // Minimalwinkel
    0.0349
};

KoerperteilParams linkerEllenbogenZwischenkoerper = {
    // Masse
    1,
    // Position
    {-4.0, 0, 10.75},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.01,
    // Hoehe
    0.01
};

KoerperteilParams rechterEllenbogenZwischenkoerper = {
    // Masse
    1,
    // Position
    {4.0, 0, 10.75},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.01,
    // Hoehe
    0.01
};

GelenkParams linkerEllenbogenGierenParams = {
    // Position
    {-4.0, 0, 10.625},
    // Ausrichtung (Nicken)
    {gieren[0], gieren[1], gieren[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    2.0857,
    // Minimalwinkel
    -2.0857
};

GelenkParams rechterEllenbogenGierenParams = {
    // Position
    {4.0, 0, 10.625},
    // Ausrichtung (Nicken)
    {gieren[0], gieren[1], gieren[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    2.0857,
    // Minimalwinkel
    -2.0857
};

GelenkParams linkesHandgelenkGierenParams = {
    // Position
    {-4.0, 0, 8.5},
    // Ausrichtung (Nicken)
    {gieren[0], gieren[1], gieren[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    1.8238,
    // Minimalwinkel
    -1.8238
};

GelenkParams rechtesHandgelenkGierenParams = {
    // Position
    {4.0, 0, 8.5},
    // Ausrichtung (Nicken)
    {gieren[0], gieren[1], gieren[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    1.8238,
    // Minimalwinkel
    -1.8238
};


KoerperteilParams torsoParams = {
    // Masse
    1.0496,
    // Position
    {0.0, 0.0, 10.75},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    1.75,
    // Hoehe
    4.0
};

KoerperteilParams linkesBeckenParams = {
    // Masse
    0.1,
    // Position
    {-2.5, 0, 7.25},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    0.5
};

KoerperteilParams rechtesBeckenParams = {
    // Masse
    0.1,
    // Position
    {2.5, 0, 7.25},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.5,
    // Hoehe
    0.5
};

KoerperteilParams schaedelParams = {
    // Masse
    0.60533,
    // Position
    {0.0, 0.0, 14.75},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    1.0,
    // Hoehe
    2.0
};

GelenkParams halsgelenkGierenParams = {
    // Position
    {0.0, 0, 11.625},
    // Ausrichtung (Nicken)
    {gieren[0], gieren[1], gieren[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    2.0857,
    // Minimalwinkel
    -2.0857
};

GelenkParams halsgelenkNickenParams = {
    // Position
    {0.0, 0, 11.825},
    // Ausrichtung (Nicken)
    {nicken[0], nicken[1], nicken[2]},
    // maximale Geschwindigkeit
    1.0,
    // Maximalwinkel
    0.5149,
    // Minimalwinkel
    -0.6720
};

KoerperteilParams halsgelenkZwischenkoerper = {
    // Masse
    1,
    // Position
    {0.0, 0, 11.75},
    // Ausrichtung
    {1.0, 1.0, 0},
    // Radius
    0.01,
    // Hoehe
    0.01
};
