
#if !defined(MQTTWNC14A2A_H)
#define MQTTWNC14A2A_H

#include "MQTTmbed.h"
#include "WNC14A2AInterface.h"
#include "MQTTSocket.h"

class MQTTwnc : public MQTTSocket
{
public:    
    MQTTwnc() : MQTTSocket(&wnc)
    {
        wnc.connect();
    }
    
    WNC14A2AInterface& getEth()
    {
        return wnc;
    }
    
private:

    WNC14A2AInterface wnc;
    
};


#endif
