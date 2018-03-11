#ifndef GATEWAY_H
#define GATEWAY_H

#include <QObject>
#include "radio_manager.h"
#include "apirest.h"

namespace luna
{

class Gateway : public QObject
{
    Q_OBJECT

public:
    Gateway(QObject *parent = nullptr);
    bool start();

private:
    radio::RadioManager *_radioManager;
    Apirest *_apirest;

signals:
    void stopped();

public slots:
    void stop();
};

}
#endif // GATEWAY_H
