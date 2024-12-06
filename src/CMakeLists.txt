add_executable("Server"
        main.cpp
        app/BackShotsServer.cpp
        app/BackShotsServer.h
        app/handlers/HomePageHandler.cpp
        app/handlers/HomePageHandler.h
        app/handlers/ZikettePageHandler.cpp
        app/handlers/ZikettePageHandler.h
)

target_precompile_headers(Server PRIVATE pch.h)

target_include_directories(Server PRIVATE ${PROJECT_SOURCE_DIR}/src)

target_link_libraries(Server PRIVATE oatpp)
target_link_libraries(Server PRIVATE Poco::JSON)
target_link_libraries(Server PRIVATE spdlog::spdlog_header_only)