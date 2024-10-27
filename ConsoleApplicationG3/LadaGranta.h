#pragma once
#ifndef LADAGRANTA_H
#define LADAGRANTA_H

#include "F1Car.h"
#include "RallyCar.h"

class LadaGranta : public F1Car, public RallyCar {
public:
    LadaGranta(int maxF1Speed, int maxRallySpeed, bool isRallyOffroad);

    //using F1Car::getMaxSpeed;
    //using RallyCar::getMaxSpeed as getRallyMaxSpeed;

    void chooseDriveMode(bool isRaceMode);
    void driveCool();
private:
    bool m_raceMode;
};

#endif // LADAGRANTA_H