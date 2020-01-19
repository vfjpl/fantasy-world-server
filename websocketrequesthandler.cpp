#include "websocketrequesthandler.hpp"
#include <Poco/Net/WebSocket.h>

namespace
{
int var2int(const Poco::DynamicAny& var)
{
    return var;
}
}

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

// private

std::string WebSocketRequestHandler::parse(const Poco::DynamicStruct& data)
{
    switch(var2int(data["code"]))
    {
    case 1:
    {
        Poco::DynamicStruct json;
        json.insert("code", "load_game");
        return json.toString();
    }
    case 4:
    {
        Poco::DynamicStruct json;
        json.insert("code", 1);
        json.insert("player", "test");
        json.insert("message", data["data"]["message"]);
        return json.toString();
    }
    default:
    {
        Poco::DynamicStruct json;
        json.insert("code", "brakkodu");
        return json.toString();
    }
    }

}
