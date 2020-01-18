#include <Poco/Net/HTTPServer.h>
#include "requesthandlerfactory.hpp"

int main()
{
    Poco::Net::HTTPServer server(new RequestHandlerFactory(), 9001);

    return EXIT_SUCCESS;
}
