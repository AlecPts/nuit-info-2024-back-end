add_executable("Server"
        main.cpp
        app/BackendServ.cpp
        app/BackendServ.h
)

target_link_libraries(Server PRIVATE oatpp)
target_link_libraries(Server PRIVATE Poco::JSON)