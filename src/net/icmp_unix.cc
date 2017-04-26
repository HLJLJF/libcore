#include "icmp.h"
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>

namespace libcore {

class Icmp_Unix : public Icmp{
public:
    virtual int Send(int sock_fd);
    virtual int Receive(int sock_fd,IcmpReceiveData *outData);
};
int Icmp_Unix::Send(int sock_fd){
    return 0;
}
int Icmp_Unix::Receive(int sock_fd,IcmpReceiveData *outData){
    return 0;
}

class IcmpManage_Unix : public IcmpManage {
public:
    virtual int  Start();
    virtual void Stop();
    virtual int  Ping(string ip,PingCall call);
public:
    bool mbRun;
};

int IcmpManage_Unix::Start(){
    return 0;
}

void IcmpManage_Unix::Stop(){

}

int IcmpManage_Unix::Ping(string ip,PingCall call){
    return 0;
}

IcmpManage_Unix localIcmpManage;
Icmp *gIcmpManage = &localIcmpManage;

}
