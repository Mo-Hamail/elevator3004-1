#ifndef DISPLAY_H
#define DISPLAY_H

#include<string>

class Display
{
private:
    std::string Message;
public:
    Display();
    void setMessage(std::string);
    void displayMessage();
};

#endif // DISPLAY_H
