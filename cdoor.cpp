#include "cdoor.h"

cDoor::cDoor()
{

}
void cDoor::Open()
{
    qInfo("floor door is opened");
}
void cDoor::Close()
{
    qInfo("floor door is closed");

}
void cDoor::sendDoorIssueSignal()
{
    ds.sendObstacleSignal();
}

