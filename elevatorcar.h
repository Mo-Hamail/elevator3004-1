#ifndef ELEVATORCAR_H
#define ELEVATORCAR_H

#include<QDebug>
#include <celevatorcontrolpanel.h>
#include <cdoor.h>
#include <cbell.h>
#include <display.h>
#include <audiosystem.h>
#include <string>

const int FLOORS = 10; // number of floors in the building
const int ELEVATORS = 10; // number of elevators installed in the building


class ElevatorCar
{
private:
    cElevatorControlPanel carButtons;
    int overload;    
    int floor;
    cDoor door;
    cBell bell;
public:
    Display carDisplay;
    AudioSystem carAudio;
public:    
    ElevatorCar();
    void Move(int nextFloor);
    void displayMessage(std::string);
    void playMessageToSpeaker(std::string);
    void Stop();
    void openDoor();
    void closeDoor();
    void sendArriveSignal();
    void sendOverLoadSignal();
    void sendDoorNotClosingSignal();
    void moveToSafeFloor();
    int getFloor();
    void setFloor(int f);

};

#endif // ELEVATORCAR_H
