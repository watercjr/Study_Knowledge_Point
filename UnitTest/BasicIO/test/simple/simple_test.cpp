#include "impl/include/BasicIO_FILE.hpp"
#include "impl/include/BasicIO_STDOUT.hpp"

#include <iostream>

int main()
{
    std::cout << "Test BasicIO_FILE - BEGIN\n";
    BasicIO_FILE bf;
    bf.add(1);
    bf.add(100);
    bf.subtract(50);
    std::cout << "Test BasicIO_FILE - END\n";

    std::cout << "Test BasicIO_STDOUT - BEGIN\n";
    BasicIO_STDOUT bs;
    bs.add(1);
    bs.add(100);
    bs.subtract(50);
    std::cout << "Test BasicIO_FILE - END\n";

    return 0;
}
