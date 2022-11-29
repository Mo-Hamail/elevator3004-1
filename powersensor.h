#ifndef POWERSENSOR_H
#define POWERSENSOR_H

#include "sensor.h"
#include<QDebug>

class PowerSensor : Sensor
{
public:
    PowerSensor();
    void sendPowerOutSignal();
};

#endif // POWERSENSOR_H
