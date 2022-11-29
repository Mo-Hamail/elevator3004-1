#ifndef CECS_H
#define CECS_H

#include <cfloor.h>
#include <elevatorcar.h>
#include <firesensor.h>
#include <powersensor.h>
#include<QDebug>

//const int FLOORS = 10; // number of floors in the building
//const int ELEVATORS = 10; // number of elevators installed in the building


class cECS
{
private:
    cFloor floors[FLOORS];
    ElevatorCar elevators[ELEVATORS];
    FireSensor fs;
    PowerSensor ps;

public:
    cECS();
    void start();
    void startHelping(int floor, int elevator);
    void resolveDoorIssue(int floor, int elevator);
    void startFireProcedures();
    void startOverLoadProcedure(int floor, int elevator);
    void startPowerOutProcedure();
    void processRequest(cFloorButton reqInfo);
    int chooseElevator(cFloorButton reqInfo);

};

#endif // CECS_H
