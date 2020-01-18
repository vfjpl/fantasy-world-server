#ifndef REQUESTHANDLERFACTORY_HPP_INCLUDED
#define REQUESTHANDLERFACTORY_HPP_INCLUDED

#include <Poco/Net/HTTPRequestHandlerFactory.h>

class RequestHandlerFactory: public Poco::Net::HTTPRequestHandlerFactory
{
public:
    Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request);
};

#endif // REQUESTHANDLERFACTORY_HPP_INCLUDED
