#ifndef FLOORSENSOR_H
#define FLOORSENSOR_H

#include "sensor.h"
#include<QDebug>

class FloorSensor : public Sensor
{
public:
    FloorSensor();
    int getFloorNumber();
};

#endif // FLOORSENSOR_H
