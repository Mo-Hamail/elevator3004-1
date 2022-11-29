#ifndef CFLOORBUTTON_H
#define CFLOORBUTTON_H

#include <cbutton.h>
#include<QDebug>

class cFloorButton : public cButton
{
private:
    int nDirection;
    int nfloor;
public:

    cFloorButton();
    int getFloorInfo();
    int getDirection();
    void setFloor(int floor);
    void setDirection(int direction);
};

#endif // CFLOORBUTTON_H
