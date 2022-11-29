#include "display.h"
#include<QDebug>

Display::Display()
{

}
void Display::setMessage(std::string theMessage)
{
    Message = theMessage;
}
void Display::displayMessage()
{
    qInfo(Message.c_str());
    //qInfo(Message);
}
