# MQTT -- An API for using MQTT over multiple transports

This library originated from https://os.mbed.com/teams/mqtt/code/MQTT/ but has been modified to allow you to select different transports by
modifing the mbed_app.json file. 

## Specifying the connectivity method

Add the following to your `mbed_app.json` file:

```json
{
    "config": {
        "mqtt-interface":{
            "help": "options are MQTT_ETHERNET, MQTT_WNC14A2A, MQTT_BG96"
            "value": "MQTT_ETHERNET"
        }
    }
}
```

