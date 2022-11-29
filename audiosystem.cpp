#include "audiosystem.h"
#include<QDebug>

AudioSystem::AudioSystem()
{

}
void AudioSystem::playAudioMessage()
{
    qInfo("\nplaying Audio message ...");
}
void AudioSystem::setAudioMessage(std::string theMessage)
{
    audioMessage = theMessage;
}
