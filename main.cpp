#include "engine.hpp"

int main()
{
    Engine engine;
    engine.setup();

    while(getwchar() != L'Q');

    return EXIT_SUCCESS;
}
