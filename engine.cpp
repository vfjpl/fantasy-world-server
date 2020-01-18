#include "engine.hpp"

bool Engine::run_network()
{
    process_network(network.receive());

    return true;
}

// private

void Engine::process_network(const Poco::DynamicStruct& data)
{

}
