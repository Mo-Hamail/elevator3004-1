#ifndef CCARBUTTON_H
#define CCARBUTTON_H

#include <cbutton.h>

class cCarButton : cButton
{
private:
    int Type;

public:
    cCarButton();
    int getType();
};

#endif // CCARBUTTON_H
