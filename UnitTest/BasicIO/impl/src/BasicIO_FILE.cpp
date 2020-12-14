#include "BasicIO_FILE.hpp"

#include <fstream>

BasicIO_FILE::BasicIO_FILE()
{
}

BasicIO_FILE::~BasicIO_FILE()
{
}


void BasicIO_FILE::printRemain(const int remain)
{
    std::ofstream fs("/tmp/test.txt", std::ios::app);
    fs << "Remain: " << remain << std::endl;
    fs.close();
}
 
