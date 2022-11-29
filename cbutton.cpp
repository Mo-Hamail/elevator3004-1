#include "cbutton.h"

cButton::cButton()
{
    nIllumination = 0;
}
void cButton::pressButton()
{
    qInfo("\nButton is pressed");
    TurnOnIllumination();
}
void cButton::TurnOffIllumination()
{
    nIllumination = 0;
    qInfo("\nIllumination is truned off");
}
void cButton::TurnOnIllumination()
{
    nIllumination = 1;
    qInfo("\nIllumination is truned on");
}
