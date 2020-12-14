#include "BasicIO.hpp"

BasicIO::BasicIO()
{
}

BasicIO::~BasicIO()
{
}


void BasicIO::add(const unsigned int n)
{
    remain_ += n;
    printRemain(remain_);
}

void BasicIO::subtract(const unsigned int n)
{
    remain_ -= n;
    printRemain(remain_);
}

