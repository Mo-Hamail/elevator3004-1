#ifndef CBUTTON_H
#define CBUTTON_H

#include<QDebug>

class cButton
{
private:
    int nFloorNum;
    int nIllumination;
public:
    cButton();
    void pressButton();
    void TurnOffIllumination();
    void TurnOnIllumination();
};

#endif // CBUTTON_H
