#include "cfloor.h"

cFloor::cFloor()
{
    nNumber = 0;
}
void cFloor::setFloorSensor()
{
    sSensor.setSensorOn();
    nNumber = sSensor.getFloorNumber();
}
void cFloor::resetFloorSensor()
{
    sSensor.resetSensor();
}
