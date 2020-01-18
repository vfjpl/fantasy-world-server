#include "network.hpp"
#include "requesthandlerfactory.hpp"

Network::Network():
    server(new RequestHandlerFactory(), 9001)
{
    server.start();
}
