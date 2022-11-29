#include "audiosystem.h"
#include<QDebug>

AudioSystem::AudioSystem()
{

}
void AudioSystem::playAudioMessage()
{
    qInfo("\nplaying Audio message Now ....");
}
void AudioSystem::setAudioMessage(std::string theMessage)
{
    audioMessage = theMessage;
}
