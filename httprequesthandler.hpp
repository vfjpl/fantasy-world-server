#ifndef HTTPREQUESTHANDLER_HPP_INCLUDED
#define HTTPREQUESTHANDLER_HPP_INCLUDED

#include <Poco/Net/AbstractHTTPRequestHandler.h>

class HTTPRequestHandler: public Poco::Net::AbstractHTTPRequestHandler
{
public:
    void run();
};

#endif // HTTPREQUESTHANDLER_HPP_INCLUDED
