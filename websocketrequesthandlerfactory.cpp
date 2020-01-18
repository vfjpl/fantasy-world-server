#include "websocketrequesthandlerfactory.hpp"
#include "websocketrequesthandler.hpp"

Poco::Net::HTTPRequestHandler*
WebSocketRequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest& request)
{
    return new WebSocketRequestHandler();
}
