#include "cfloorbutton.h"

cFloorButton::cFloorButton()
{

}
int cFloorButton::getDirection()
{
    return nDirection;
}
int cFloorButton::getFloorInfo()
{
    return nfloor;
}
void cFloorButton::setFloor(int floor)
{
    nfloor = floor;
}
void cFloorButton::setDirection(int direction)
{
    nDirection = direction;
}
