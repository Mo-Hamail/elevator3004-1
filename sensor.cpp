#include "sensor.h"

Sensor::Sensor()
{
    nState = 0;
}
void Sensor::resetSensor()
{
    nState = 0;
}
void Sensor::setSensorOn()
{
    nState = 1;
}
