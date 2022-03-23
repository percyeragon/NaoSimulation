/* In dieser Datei werden zentral alle Parameter des Roboters gespeichert,
 * sodass ein das Aendern schnell moeglich ist.
 */
#ifndef NAOSIMULATIONMODELLENTWURF_MODELLIERUNG_PARMS_ROBOTERPARAMSETTINGS
#define NAOSIMULATIONMODELLENTWURF_MODELLIERUNG_PARMS_ROBOTERPARAMSETTINGS

#include "KoerperteilParams.h"
#include "GelenkParams.h"

// Definition der Achsen
// "Rollen"
static float rollen[3] = {0, 1, 0};
// "Nicken"
static float nicken[3] = {1, 0, 0};
// "Gieren"
static float gieren[3] = {0, 0, 1};


//                      //
// PARAMETER DER BEINE  //
//                      //

/// KOERPERTEILE ...

// Parameter fuer die Initailisierung des
// linken Oberschenkels
extern KoerperteilParams linkerOberschenkelParams;

// Parameter fuer die Initialisierung des
// rechten Oberschenkels
extern KoerperteilParams rechterOberschenkelParams;

// Parameter fuer die Initialisierung des
// linken Schienbeins
extern KoerperteilParams linkesSchienbeinParams;

// Parameter fuer die Initialisierung des
// rechten Schienbeins
extern KoerperteilParams rechtesSchienbeinParams;

// Parameter fuer die Initialisierung des
// linken Fusses
extern KoerperteilParams linkerFussParams;

// Parameter fuer die Initialisierung des
// rechter Fusses
extern KoerperteilParams rechterFussParams;

/// GELENKE ...

// Parameter fuer die Initialisierung
// zum Rollen (eigentlich Nicken) des linken Knies
extern GelenkParams linkesKnieRollenParams;

// Parameter fuer die Initialisierung
// zum Rollen (eigentlich Nicken) des rechten Knies
extern GelenkParams rechtesKnieRollenParams;

// Parameter fuer die Initialisierung
// zum Rollen des linken Sprunggelenks
extern GelenkParams linkesSprunggelenkRollenParams;

// Parameter fuer die Initialisierung
// zum Rollen des rechten Sprunggelenks
extern GelenkParams rechtesSprunggelenkRollenParams;

// Parameter fuer den Zwischenkoerper des linken
// Sprunggelenks
extern KoerperteilParams linkesSprunggelenkZwischenkoerper;

// Parameter fuer den Zwischenkoerper des rechten
// Sprunggelenks
extern KoerperteilParams rechtesSprunggelenkZwischenkoerper;

// Parameter fuer die Initialisierung
// zum Nicken des linken Sprunggelenks
extern GelenkParams linkesSprunggelenkNickenParams;

// Parameter fuer die Initialisierung
// zum Nicken des rechten Sprunggelenks
extern GelenkParams rechtesSprunggelenkNickenParams;

//                      //
// PARAMETER DER ARME   //
//                      //

/// KOERPERTEILE ...

// Parameter fuer die Initailisierung des
// linken Oberarms
extern KoerperteilParams linkerOberarmParams;

// Parameter fuer die Initailisierung des
// linken Oberarms
extern KoerperteilParams rechterOberarmParams;

// Parameter fuer die Initailisierung des
// linken Unterarms
extern KoerperteilParams linkerUnterarmParams;

// Parameter fuer die Initailisierung des
// rechten Unterarms
extern KoerperteilParams rechterUnterarmParams;

// Parameter fuer die Initailisierung der
// linken Hand
extern KoerperteilParams linkeHandParams;

// Parameter fuer die Initailisierung der
// rechten Hand
extern KoerperteilParams rechteHandParams;

/// GELENKE ...

// Parameter fuer die Initialisierung
// zum Rollen des linken Ellenbogens
extern GelenkParams linkerEllenbogenRollenParams;

// Parameter fuer die Initialisierung
// zum Rollen des rechten Ellenbogens
extern GelenkParams rechterEllenbogenRollenParams;

// Parameter fuer den Zwischenkoerper des linken
// Sprunggelenks
extern KoerperteilParams linkerEllenbogenZwischenkoerper;

// Parameter fuer den Zwischenkoerper des rechten
// Sprunggelenks
extern KoerperteilParams rechterEllenbogenZwischenkoerper;

// Parameter fuer die Initialisierung
// zum Gieren des linken Ellenbogens
extern GelenkParams linkerEllenbogenGierenParams;

// Parameter fuer die Initialisierung
// zum Gieren des rechten Ellenbogens
extern GelenkParams rechterEllenbogenGierenParams;

// Parameter fuer die Initialisierung
// zum Gieren des linken Handgelenks
extern GelenkParams linkesHandgelenkGierenParams;

// Parameter fuer die Initialisierung
// zum Gieren des rechten Handgelenks
extern GelenkParams rechtesHandgelenkGierenParams;

//                              //
//  PARAMETER FUER DEN RUMPF    //
//                              //

// KOERPERTEILE

// Parameter fuer die Initialisierung des
// Rumpfs ...
extern KoerperteilParams torsoParams;

// Parameter fuer die Initialisierung des
// linken Becken(knochens)
extern KoerperteilParams linkesBeckenParams;

// Parameter fuer die Initialisierung des
// linken Becken(knochens)
extern KoerperteilParams rechtesBeckenParams;

// Hier Parameter fuer weitere Teile des Roboters definieren ... [ANPASSEN]

extern KoerperteilParams schaedelParams;

extern GelenkParams halsgelenkGierenParams;

extern GelenkParams halsgelenkNickenParams;

extern KoerperteilParams halsgelenkZwischenkoerper;
#endif
