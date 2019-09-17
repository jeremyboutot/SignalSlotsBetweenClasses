#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT
public:
    explicit Sender(QObject *parent = nullptr);
    void fireSignal(); //public function used to emit the signal

signals:
    void foo(const QString& arg);

public slots:
};

#endif // SENDER_H
