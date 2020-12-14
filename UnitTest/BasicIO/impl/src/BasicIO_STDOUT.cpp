#include "BasicIO_STDOUT.hpp"

#include <iostream>

BasicIO_STDOUT::BasicIO_STDOUT()
{
}

BasicIO_STDOUT::~BasicIO_STDOUT()
{
}

void BasicIO_STDOUT::printRemain(const int remain)
{
    std::cout << "Remain: " << remain << std::endl;
}
 
