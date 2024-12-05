#include <iostream>
#include <oatpp/Environment.hpp>

int main(int argc, char** argv)
{
    oatpp::Environment::init();

    std::cout << "Hello World !" << std::endl;

    oatpp::Environment::destroy();
    return 0;
}