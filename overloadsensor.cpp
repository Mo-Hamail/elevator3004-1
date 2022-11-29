#include "overloadsensor.h"
#include <QDebug>

OverLoadSensor::OverLoadSensor()
{

}
void OverLoadSensor::sendOverLoadSignal()
{
    qInfo("Weight in Elevator exceeds Max weight");
}
