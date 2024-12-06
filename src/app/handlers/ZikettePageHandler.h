//
// Created by Emilien on 05/12/2024.
//

#ifndef LANUIT2INFO_ZIKETTEPAGEHANDLER_H
#define LANUIT2INFO_ZIKETTEPAGEHANDLER_H


#include "pch.h"

class ZikettePageHandler : public oatpp::web::server::HttpRequestHandler {
int counter = 0;
public:
    std::shared_ptr<OutgoingResponse> handle(const std::shared_ptr<IncomingRequest>& request) override {
        std::stringstream strstream("");
        strstream << "Bravo, tu est le visiteur no : " << counter++ << std::endl;
        return ResponseFactory::createResponse(Status::CODE_200, strstream.str());
    }
};


#endif //LANUIT2INFO_ZIKETTEPAGEHANDLER_H
