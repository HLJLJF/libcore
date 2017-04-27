#ifndef LIBCORE_ICMP_H__
#define LIBCORE_ICMP_H__

#include "common.h"

namespace libcore{

typedef int (*PingCall)(string ip,void *);


class IcmpReceiveData : public BaseObject{
public:
    string mIp;
};

class Icmp : public BaseObject{
public:
    virtual int OpenScoket() = 0;
    virtual int Send(int sock_fd) = 0;
    virtual int Receive(int sock_fd,IcmpReceiveData *outData) = 0;
};

class IcmpManage : public StartAndStop {
public:
    virtual void SetProtocol(Icmp* ) = 0;
    virtual int Ping(string ip,PingCall call) = 0;
};

extern IcmpManage *gIcmpManage;

}

#endif
