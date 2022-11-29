#ifndef CFLOOR_H
#define CFLOOR_H

#include <floorsensor.h>
#include<cfloorbutton.h>
#include<QDebug>

class cFloor
{
private:
    cFloorButton button;
    int nNumber;
    FloorSensor sSensor;

public:
    cFloor();
    void setFloorSensor();
    void resetFloorSensor();
};

#endif // CFLOOR_H
