#include "websocketrequesthandler.hpp"
#include <Poco/Net/WebSocket.h>

void WebSocketRequestHandler::run()
{
    std::string json;
    Poco::Buffer<char> buffer(0);
    Poco::Net::WebSocket socket(request(), response());
    int flags;

    for(;;)
    {
        buffer.resize(0, false);
        socket.receiveFrame(buffer, flags);
        json = parse(Poco::DynamicAny::parse(std::string(buffer.begin(), buffer.size())).extract<Poco::DynamicStruct>());
        socket.sendFrame(json.data(), json.size());
    }
}
