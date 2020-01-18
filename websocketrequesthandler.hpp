#ifndef WEBSOCKETREQUESTHANDLER_HPP_INCLUDED
#define WEBSOCKETREQUESTHANDLER_HPP_INCLUDED

#include <Poco/Net/AbstractHTTPRequestHandler.h>

class WebSocketRequestHandler: public Poco::Net::AbstractHTTPRequestHandler
{
public:
    void run();
};

#endif // WEBSOCKETREQUESTHANDLER_HPP_INCLUDED
