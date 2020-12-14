#ifndef _BASIC_IO_STDOUT_HPP_
#define _BASIC_IO_STDOUT_HPP_

#include "core/include/BasicIO.hpp"

class BasicIO_STDOUT : public BasicIO
{
public:
    BasicIO_STDOUT();
    virtual ~BasicIO_STDOUT();

    virtual void printRemain(const int remain) override; 
};

#endif
