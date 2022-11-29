#include "elevatorcar.h"

ElevatorCar::ElevatorCar()
{    
    srand (time(NULL));
    floor = (rand() % FLOORS + 1); //to generate random floors for elevator cars.
}
void ElevatorCar::Move(int nextFloor)
{
    qInfo("\nMoving to next floor");
    floor++;
}
void ElevatorCar::displayMessage(std::string Message)
{
    qInfo("\nElevator Display: ");
    qInfo(Message.c_str());
}
void ElevatorCar::playMessageToSpeaker(std::string message)
{
    qInfo("\nElevator Speakers: ");
    qInfo(message.c_str());
}
void ElevatorCar::Stop()
{
    qInfo("\nElevator stopped due to an emergency");
}
void ElevatorCar::openDoor()
{
    bell.Ring();
    door.Open();
}
void ElevatorCar::closeDoor()
{
    door.Close();
}
void ElevatorCar::sendOverLoadSignal()
{
    qInfo("Elevator is overloaded");
}
void ElevatorCar::sendArriveSignal()
{
    qInfo("Elevator Arrives at floor number %d", floor);
}
void ElevatorCar::sendDoorNotClosingSignal()
{
    door.sendDoorIssueSignal();
}
void ElevatorCar::moveToSafeFloor()
{
    floor = 0;
}
int ElevatorCar::getFloor()
{
    return floor;
}
void ElevatorCar::setFloor(int f)
{
    floor = f;
}
