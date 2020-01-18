#include "httpsrequesthandlerfactory.hpp"
#include "httpsrequesthandler.hpp"

Poco::Net::HTTPRequestHandler*
HTTPSRequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest& request)
{
    return new HTTPSRequestHandler();
}
