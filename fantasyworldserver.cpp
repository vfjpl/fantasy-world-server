#include "fantasyworldserver.hpp"
#include <Poco/Net/HTTPSClientSession.h>
#include <Poco/Net/SecureServerSocket.h>
#include <Poco/Net/HTTPServer.h>
#include "httpsrequesthandlerfactory.hpp"
#include "httprequesthandlerfactory.hpp"
#include "websocketrequesthandlerfactory.hpp"

int FantasyWorldServer::main(const Poco::Util::ServerApplication::ArgVec& args)
{
    config().setString("openSSL.server.privateKeyFile", "any.pem");

    Poco::Net::SecureServerSocket sslsocket(Poco::Net::HTTPSClientSession::HTTPS_PORT);
    Poco::Net::HTTPServer https(new HTTPSRequestHandlerFactory(), sslsocket, new Poco::Net::HTTPServerParams());
    Poco::Net::HTTPServer http(new HTTPRequestHandlerFactory());
    Poco::Net::HTTPServer websocket(new WebSocketRequestHandlerFactory(), 9001);

    https.start();
    http.start();
    websocket.start();

    waitForTerminationRequest();

    websocket.stop();
    http.stop();
    https.stop();

    return EXIT_SUCCESS;
}
