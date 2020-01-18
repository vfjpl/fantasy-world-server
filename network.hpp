#ifndef NETWORK_HPP_INCLUDED
#define NETWORK_HPP_INCLUDED

#include <Poco/Net/HTTPServer.h>

class Network
{
    Poco::Net::HTTPServer server;

public:
    Network();
    void start();
};

#endif // NETWORK_HPP_INCLUDED
