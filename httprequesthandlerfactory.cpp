#include "httprequesthandlerfactory.hpp"
#include "httprequesthandler.hpp"

Poco::Net::HTTPRequestHandler*
HTTPRequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest& request)
{
    return new HTTPRequestHandler();
}
