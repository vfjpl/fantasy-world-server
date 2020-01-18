#ifndef HTTPSREQUESTHANDLER_HPP_INCLUDED
#define HTTPSREQUESTHANDLER_HPP_INCLUDED

#include <Poco/Net/AbstractHTTPRequestHandler.h>

class HTTPSRequestHandler: public Poco::Net::AbstractHTTPRequestHandler
{
public:
    void run();
};

#endif // HTTPSREQUESTHANDLER_HPP_INCLUDED
