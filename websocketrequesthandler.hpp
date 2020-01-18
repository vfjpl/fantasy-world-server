#ifndef WEBSOCKETREQUESTHANDLER_HPP_INCLUDED
#define WEBSOCKETREQUESTHANDLER_HPP_INCLUDED

#include <Poco/Net/AbstractHTTPRequestHandler.h>
#include <Poco/DynamicStruct.h>

class WebSocketRequestHandler: public Poco::Net::AbstractHTTPRequestHandler
{
public:
    void run();

private:
    std::string parse(const Poco::DynamicStruct& data);
};

#endif // WEBSOCKETREQUESTHANDLER_HPP_INCLUDED
