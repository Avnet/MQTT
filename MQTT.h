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

//
// To add additional transports, Define it as:
//
#define MQTT_BG96         100
#define MQTT_WNC14A2A     101
#define MQTT_ETHERNET     102

//
// Then define the interface that will be used:
//
#if   MBED_CONF_APP_MQTT_INTERFACE == MQTT_BG96
#define _ift BG96Interface

#elif MBED_CONF_APP_MQTT_INTERFACE == MQTT_WNC14A2A
#define _ift WNC14A2AInterface

#elif MBED_CONF_APP_MQTT_INTERFACE == MQTT_ETHERNET
#define _ift EthernetInterface

#else
#error "No MQTT Network Transport chosen. Please add 'config.mqtt-interfaces.value' to your mbed_app.json (see README.md for more information)."
#endif

typedef MQTTconnect<_ift> MQTTct; 
typedef _ift MQTTnet;

#endif

