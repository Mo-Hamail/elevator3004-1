#include "firesensor.h"
#include <QDebug>

FireSensor::FireSensor()
{

}
void FireSensor::sendFireAlarmSignal()
{
    qInfo("Warning Fire detected in the building");
}
