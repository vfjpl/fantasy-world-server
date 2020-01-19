#include "httprequesthandler.hpp"
#include <Poco/Net/HTTPServerResponse.h>

void HTTPRequestHandler::run()
{
    response().send() << "token = 'testowytoken' url='/assets/looktypes/100000.gif'";
}
