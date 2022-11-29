#ifndef CDOOR_H
#define CDOOR_H

#include<QDebug>
#include<doorsensor.h>

class cDoor
{
private:
    DoorSensor ds;
public:
    cDoor();
    void Open();
    void Close();
    void sendDoorIssueSignal();
};

#endif // CDOOR_H
