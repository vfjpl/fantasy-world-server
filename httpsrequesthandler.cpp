#include "httpsrequesthandler.hpp"
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/DynamicStruct.h>

void HTTPSRequestHandler::run()
{
    if(request().getURI() == "/ajax/login")
    {
        response().set(Poco::Net::HTTPResponse::SET_COOKIE, "a=b;c=d");
        Poco::DynamicStruct data;
        data.insert("code", 200);
        data.insert("status", 200);
        response().send() << data.toString();
    }
    else if(request().getURI() == "/")
    {
        response().send() << "value=\"test\"";
    }
    else if(request().getURI() == "/game/init/testowytoken")
    {
        Poco::DynamicStruct player;
        player.insert("id", 10);
        player.insert("shortcut", std::vector<int>());
        player.insert("experience", 100);
        player.insert("to_level", 100);
        player.insert("health", 100);
        player.insert("health_max", 100);
        Poco::DynamicStruct map_positions;
        map_positions.insert("PLAYER_X", 10);
        map_positions.insert("PLAYER_Y", 10);

        std::vector<Poco::DynamicStruct> map_data;
        for(int i = 0; i < 5; ++i)
            for(int j = 0; j < 5; ++j)
            {
                Poco::DynamicStruct map;
                map.insert("source", "maps/5/map_5_" + std::to_string(i+1) + "_" + std::to_string(j+1));
                map.insert("x", i);
                map.insert("y", j);
                map_data.push_back(map);
            }

        Poco::DynamicStruct data;
        data.insert("map_data", map_data);
        data.insert("player", player);
        data.insert("map_positions", map_positions);
        data.insert("tiles", std::vector<int>());
        data.insert("chests", std::vector<int>());
        data.insert("monsters", std::vector<int>());
        data.insert("npcs", std::vector<int>());
        data.insert("players", std::vector<int>());


        Poco::DynamicStruct json;
        json.insert("code", 100);
        json.insert("data", data);
        response().send() << json.toString();
    }
    else
    {
        response().send();

    }

}
