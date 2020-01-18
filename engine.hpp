#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include "network.hpp"

class Engine
{
    Network network;

public:
    bool run_network();

private:
    void process_network(const Poco::DynamicStruct& data);
};

#endif // ENGINE_HPP_INCLUDED
