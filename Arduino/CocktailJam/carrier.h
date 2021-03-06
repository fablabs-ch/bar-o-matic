#ifndef CARRIER_H
#define CARRIER_H

#include <Arduino.h>
#include "BasicStepperDriver.h"

#include "constants.h"

class Carrier
{
    public:
        Carrier(BasicStepperDriver* stepper);

        void init();

        void run();

        void homing();

        void move(long positionMm);

        int getPositionMm();

        void release();

        bool isMoving();

    private:
        BasicStepperDriver* stepper;

        int nextPosition = -1;
};

#endif
