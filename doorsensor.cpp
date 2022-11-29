#include "doorsensor.h"
#include<QDebug>

DoorSensor::DoorSensor()
{

}
void DoorSensor::sendObstacleSignal()
{
    qInfo("\nDoor Can't close");
}
