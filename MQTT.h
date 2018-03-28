#ifndef __MQTT_H__
#define __MQTT_H__

#include "MQTTmbed.h"
#include "MQTTSocket.h"

template <class T>
class MQTTconnect : public MQTTSocket
{
    T eth;
  public:
    MQTTconnect() : MQTTSocket(&eth)
    { eth.connect(); }

    T& getEth()
    { return eth; }
};

#define MQTT_USE(x)	typedef MQTTconnect<x> MQTTct; typedef x MQTTnet;

#endif


