//#include <Poco/Net/HTTPSClientSession.h>
//#include <Poco/Net/SecureServerSocket.h>
#include <Poco/Net/HTTPServer.h>
#include "httpsrequesthandlerfactory.hpp"
#include "httprequesthandlerfactory.hpp"
#include "websocketrequesthandlerfactory.hpp"

int main()
{
    //Poco::Net::SecureServerSocket sslsocket;
    //Poco::Net::HTTPServer https(new HTTPSRequestHandlerFactory(), sslsocket, new Poco::Net::HTTPServerParams());
    //Poco::Net::HTTPServer http(new HTTPRequestHandlerFactory());
    Poco::Net::HTTPServer websocket(new WebSocketRequestHandlerFactory(), 9001);

    //https.start();
    //http.start();
    websocket.start();

    while(getwchar() != L'Q');

    return EXIT_SUCCESS;
}
