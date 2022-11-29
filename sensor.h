#ifndef SENSOR_H
#define SENSOR_H


class Sensor
{
private:
    int nState;
public:
    Sensor();
    void resetSensor();
    void setSensorOn();
};

#endif // SENSOR_H
