#ifndef WEBSOCKETREQUESTHANDLERFACTORY_HPP_INCLUDED
#define WEBSOCKETREQUESTHANDLERFACTORY_HPP_INCLUDED

#include <Poco/Net/HTTPRequestHandlerFactory.h>

class WebSocketRequestHandlerFactory: public Poco::Net::HTTPRequestHandlerFactory
{
public:
    Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request);
};

#endif // WEBSOCKETREQUESTHANDLERFACTORY_HPP_INCLUDED
