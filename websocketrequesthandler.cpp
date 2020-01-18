#include "websocketrequesthandler.hpp"
#include <Poco/Net/WebSocket.h>

void WebSocketRequestHandler::run()
{
    Poco::Net::WebSocket socket(request(), response());
    Poco::Buffer<char> buffer(0);
    int flags;

    socket.receiveFrame(buffer, flags);
}
