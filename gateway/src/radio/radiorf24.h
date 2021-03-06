#ifndef LUNA_RADIO_RADIO_RF24_H
#define LUNA_RADIO_RADIO_RF24_H

#include <QObject>
#include <QHash>

#include <RF24/RF24.h>
#include <RF24Network/RF24Network.h>
#include <RF24Mesh/RF24Mesh.h>

//#include "lunapb.h"
#include "iradio.h"

namespace luna
{
namespace radio
{

class RadioRF24 : public IRadio
{
    Q_OBJECT

public:
    RadioRF24(QObject* parent = nullptr);
    QString getName() override;
    QObject *getObject() override;

private:
    QString _name;
    bool _gameover;
//    QHash<RemoteDevHeader, RF24NetworkHeader> _deviceTable;

signals:
    void finished();

public slots:
    bool start() override;
    void stop() override;
    void quit() override;

};

} // radio
} // luna
#endif // LUNA_RADIO_RADIO_RF24_H
