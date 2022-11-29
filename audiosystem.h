#ifndef AUDIOSYSTEM_H
#define AUDIOSYSTEM_H

#include <string>

class AudioSystem
{
private:
    std::string audioMessage;
public:
    AudioSystem();
    void playAudioMessage();
    void setAudioMessage(std::string);
};

#endif // AUDIOSYSTEM_H
