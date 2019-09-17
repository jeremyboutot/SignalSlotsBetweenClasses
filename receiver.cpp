#include "receiver.h"
#include <QDebug>
Receiver::Receiver(QObject *parent) : QObject(parent)
{

}

void Receiver::bar(const QString &arg)
{
    qDebug() << "This was emitted from Sender class" << endl;
    qDebug() << "The message was: " << arg;
}
