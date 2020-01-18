#ifndef NETWORK_HPP_INCLUDED
#define NETWORK_HPP_INCLUDED

#include <Poco/Net/HTTPServerSession.h>
#include <Poco/Net/HTTPServerRequestImpl.h>
#include <Poco/Net/HTTPServerResponseImpl.h>
#include <Poco/Net/WebSocket.h>
#include <Poco/DynamicStruct.h>

class Network
{
    //184
    Poco::Net::HTTPServerRequestImpl request;
    //136
    Poco::Net::HTTPServerResponseImpl response;
    //120
    Poco::Net::HTTPServerSession http;
    //16
    Poco::Net::WebSocket socket;

public:
    Network();

    Poco::DynamicStruct receive();
};

#endif // NETWORK_HPP_INCLUDED
