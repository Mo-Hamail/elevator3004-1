#include "powersensor.h"
#include <QDebug>
PowerSensor::PowerSensor()
{

}
void PowerSensor::sendPowerOutSignal()
{
    qInfo("Power out is detected");
}
