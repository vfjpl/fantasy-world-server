#ifndef FANTASYWORLDSERVER_HPP_INCLUDED
#define FANTASYWORLDSERVER_HPP_INCLUDED

#include <Poco/Util/ServerApplication.h>

class FantasyWorldServer: public Poco::Util::ServerApplication
{
public:
    int main(const Poco::Util::ServerApplication::ArgVec& args);
};

#endif // FANTASYWORLDSERVER_HPP_INCLUDED
