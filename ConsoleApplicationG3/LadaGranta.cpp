#include "LadaGranta.h"
#include <iostream>

LadaGranta::LadaGranta(int maxF1Speed, int maxRallySpeed, bool isRallyOffroad)
    : F1Car(maxF1Speed), RallyCar(maxRallySpeed, isRallyOffroad), m_raceMode(false) {}

void LadaGranta::chooseDriveMode(bool isRaceMode) {
    m_raceMode = isRaceMode;
}

void LadaGranta::driveCool() {
    if (m_raceMode) {
        F1Car::drive();
    }
    else {
        RallyCar::drive();
    }
}