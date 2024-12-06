#include "BackShotsServer.h"
#include "handlers/HomePageHandler.h"
#include "handlers/ZikettePageHandler.h"

void BackShotsServer::run() {
    router = oatpp::web::server::HttpRouter::createShared();
    addControlers();
    handler = oatpp::web::server::HttpConnectionHandler::createShared(router);
    provider = oatpp::network::tcp::server::ConnectionProvider::createShared(
            {"localhost", 8000, oatpp::network::Address::IP_4}
            );
    server = oatpp::network::Server::createShared(provider,handler);

    SPDLOG_INFO("Server running on port: {}", (char*)provider->getProperty("port").getData());
    server->run();
}

BackShotsServer::BackShotsServer() {

}

void BackShotsServer::addControlers() {
    router->route("GET", "/", std::make_shared<HomePageHandler>());
    router->route("GET", "/zikette", std::make_shared<ZikettePageHandler>());
}
