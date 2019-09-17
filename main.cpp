#include <QCoreApplication>
#include <QObject>
#include "sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sender sender;
    Receiver receiver;

    QObject::connect(&sender, SIGNAL(foo(QString)), &receiver, SLOT(bar(QString)));

    sender.fireSignal();


    return a.exec();
}
