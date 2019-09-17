#include "sender.h"

Sender::Sender(QObject *parent) : QObject(parent)
{

}

void Sender::fireSignal()
{
    emit foo("This is a message, sender is sending to receiver");
}
