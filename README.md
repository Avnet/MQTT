# MQTT -- An API for using MQTT over multiple transports

This library originated from https://os.mbed.com/teams/mqtt/code/MQTT/ but has been modified to allow you to select different transports via a MACRO.  For example, to use the BG96Interface:
```
    MQTT_USE(BG96Interface);
    MQTTct   net;
```

