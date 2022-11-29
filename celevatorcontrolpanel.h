#ifndef CELEVATORCONTROLPANEL_H
#define CELEVATORCONTROLPANEL_H

//#include <cecs.h>
#include<ccarbutton.h>
#include<QDebug>


class cElevatorControlPanel
{
private:
    cCarButton buttons[10 + 10];
public:
    cElevatorControlPanel();
    void PressButton();
};

#endif // CELEVATORCONTROLPANEL_H
