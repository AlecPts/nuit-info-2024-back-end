//
// Created by Emilien on 05/12/2024.
//

#ifndef LANUIT2INFO_HOMEPAGEHANDLER_H
#define LANUIT2INFO_HOMEPAGEHANDLER_H


#include "pch.h"

class HomePageHandler : public oatpp::web::server::HttpRequestHandler {
public:
    std::shared_ptr<OutgoingResponse> handle(const std::shared_ptr<IncomingRequest>& request) override {
        return ResponseFactory::createResponse(Status::CODE_200, "Hello World !");
    }
};


#endif //LANUIT2INFO_HOMEPAGEHANDLER_H
