#include "requesthandlerfactory.hpp"
#include "websocketrequesthandler.hpp"

Poco::Net::HTTPRequestHandler* RequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest& request)
{
    return new WebSocketRequestHandler();
}
