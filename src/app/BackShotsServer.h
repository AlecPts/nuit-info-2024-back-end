#ifndef LANUIT2INFO_BACKSHOTSSERVER_H
#define LANUIT2INFO_BACKSHOTSSERVER_H


#include "pch.h"


class BackShotsServer {
    std::shared_ptr<oatpp::web::server::HttpConnectionHandler> handler;
    std::shared_ptr<oatpp::web::server::HttpRouter> router;
    std::shared_ptr<oatpp::network::tcp::server::ConnectionProvider> provider;
    std::shared_ptr<oatpp::network::Server> server;
public:
    void run();

    BackShotsServer();

    void addControlers();
};


#endif //LANUIT2INFO_BACKSHOTSSERVER_H
