#include "cecs.h"

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

cECS::cECS()
{

}

void cECS::start()
{

}
void cECS::startHelping(int floor, int elevatorNumber)
{
    //int response = 0;
    //srand (time(NULL));

    qInfo("\nHelp button is pressed on floor number %d, elevator number %d", floor, elevatorNumber);
    elevators[elevatorNumber].carDisplay.setMessage("Distress message has been sent to Building Safety Services, they will call you soon");
    elevators[elevatorNumber].carDisplay.displayMessage();
    elevators[elevatorNumber].Move(floor);
    elevators[elevatorNumber].Stop();
    elevators[elevatorNumber].openDoor();
    qInfo("\n============================================================================");

    //response = (rand() % 100 + 1)%2; //to get a 0 or 1 as a response from building

}
void cECS::resolveDoorIssue(int floor, int elevatorNumber)
{
    qInfo("\nDoor is not closing on floor number %d, elevator number %d", floor, elevatorNumber);
    elevators[elevatorNumber].sendDoorNotClosingSignal();
    elevators[elevatorNumber].openDoor();
    elevators[elevatorNumber].Stop();
    elevators[elevatorNumber].displayMessage("Warning Please remove obstacle from door way");
    elevators[elevatorNumber].closeDoor();
    elevators[elevatorNumber].Move(floor);
    qInfo("\n============================================================================");
}
void cECS::startFireProcedures()
{
    fs.sendFireAlarmSignal();
    qInfo("\nStarting Fire Procedures");
    qInfo("\nAll Elevators will be moved to floor 0 for evacuation");
    for(int i=0; i<ELEVATORS; i++)
    {
        elevators[i].moveToSafeFloor();
        qInfo("\nElevator NO: %d, ", i+1);
        elevators[i].displayMessage("Warning Fire detected in the building, Elevator will move to floor 0. Please stay calm");
        elevators[i].playMessageToSpeaker("Warning Fire detected in the building, Elevator will move to floor 0. Please stay calm");
    }
    for(int i=0; i<ELEVATORS; i++)
    {
        qInfo("\nElevator NO: %d, ", i+1);
        elevators[i].displayMessage("Please leave elevator and take the exit to the right to leave the building");
        elevators[i].playMessageToSpeaker("Please leave elevator and take the exit to the right to leave the building");
        elevators[i].openDoor();
    }
    qInfo("\n============================================================================");
}
void cECS::startOverLoadProcedure(int floor, int elevator)
{
    qInfo("\nMax weight is exceeded on floor number %d, elevator number %d", floor, elevator);
    elevators[elevator].sendOverLoadSignal();
    elevators[elevator].Stop();
    elevators[elevator].openDoor();
    elevators[elevator].displayMessage("The elevator weight capacity is exceeded");
    elevators[elevator].playMessageToSpeaker("The elevator weight capacity is exceeded");
    qInfo("\nExtra weight removed");
    elevators[elevator].closeDoor();
    elevators[elevator].Move(floor);
    qInfo("\n============================================================================");
}
void cECS::startPowerOutProcedure()
{
    ps.sendPowerOutSignal();
    qInfo("\nStarting Powerout Procedure");
    qInfo("\nAll Elevators will be moved to safe floor 0 for evacuation");
    for(int i=0; i<ELEVATORS; i++)
    {
        elevators[i].moveToSafeFloor();
        qInfo("\nElevator NO: %d, ", i+1);
        elevators[i].displayMessage("Warning Powerout detected in the building, Elevator will move to floor 0. Please stay calm");
        elevators[i].playMessageToSpeaker("Warning Powerout detected in the building, Elevator will move to floor 0. Please stay calm");
    }
    for(int i=0; i<ELEVATORS; i++)
    {
        qInfo("\nElevator NO: %d, ", i+1);
        elevators[i].displayMessage("Please leave elevator and take the exit to the right to leave the building");
        elevators[i].playMessageToSpeaker("Please leave elevator and take the exit to the right to leave the building");
        elevators[i].openDoor();
    }
    qInfo("\n============================================================================");

}
void cECS::processRequest(cFloorButton reqInfo)
{
    int elevator = chooseElevator(reqInfo);
    // move selected Elevator to requested floor
    for(int i = elevators[elevator].getFloor(); i < reqInfo.getFloorInfo(); i++){
        elevators[elevator].Move(i);
    }
    elevators[elevator].openDoor();
    reqInfo.TurnOffIllumination();
    qInfo("\nDoor is opened for 10 seconds");
    elevators[elevator].closeDoor();
    qInfo("\nContinue moving to next floor distenation");
    qInfo("\n============================================================================");
}
int cECS::chooseElevator(cFloorButton reqInfo)
{
    int nearestCar = 0;
    int curDist = 0;
    int minDist = 10000;
    int i;
    for(i=0; i<ELEVATORS; i++)
    {
        curDist = abs(reqInfo.getFloorInfo() - elevators[i].getFloor());
        if (minDist > curDist){
            minDist = curDist;
            nearestCar = i;
        }
    }
    qInfo("\nElevator number %i is selected to fulfill the request", nearestCar);
    return nearestCar;
}
