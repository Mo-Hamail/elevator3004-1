#ifndef OVERLOADSENSOR_H
#define OVERLOADSENSOR_H

#include "sensor.h"

class OverLoadSensor : Sensor
{
public:
    OverLoadSensor();
    void sendOverLoadSignal();
};

#endif // OVERLOADSENSOR_H
