#ifndef HTTPREQUESTHANDLERFACTORY_HPP_INCLUDED
#define HTTPREQUESTHANDLERFACTORY_HPP_INCLUDED

#include <Poco/Net/HTTPRequestHandlerFactory.h>

class HTTPRequestHandlerFactory: public Poco::Net::HTTPRequestHandlerFactory
{
public:
    Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request);
};

#endif // HTTPREQUESTHANDLERFACTORY_HPP_INCLUDED
