#include "pch.h"

#include "app/BackShotsServer.h"

int main(int argc, char** argv)
{
    oatpp::Environment::init();
    BackShotsServer srv;
    SPDLOG_INFO("Hello world !");
    srv.run();
    oatpp::Environment::destroy();
    return 0;
}