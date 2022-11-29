#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include "sensor.h"

class DoorSensor : Sensor
{
public:
    DoorSensor();
    void sendObstacleSignal();
};

#endif // DOORSENSOR_H
