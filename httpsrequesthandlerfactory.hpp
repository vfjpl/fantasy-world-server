#ifndef HTTPSREQUESTHANDLERFACTORY_HPP_INCLUDED
#define HTTPSREQUESTHANDLERFACTORY_HPP_INCLUDED

#include <Poco/Net/HTTPRequestHandlerFactory.h>

class HTTPSRequestHandlerFactory: public Poco::Net::HTTPRequestHandlerFactory
{
public:
    Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request);
};

#endif // HTTPSREQUESTHANDLERFACTORY_HPP_INCLUDED
