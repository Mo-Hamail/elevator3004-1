#ifndef FIRESENSOR_H
#define FIRESENSOR_H

#include "sensor.h"

class FireSensor : Sensor
{
public:
    FireSensor();
    void sendFireAlarmSignal();
};

#endif // FIRESENSOR_H
