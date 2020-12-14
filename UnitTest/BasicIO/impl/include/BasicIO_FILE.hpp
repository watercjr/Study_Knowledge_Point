#ifndef _BASIC_IO_FILE_HPP_
#define _BASIC_IO_FILE_HPP_

#include "core/include/BasicIO.hpp"

class BasicIO_FILE : public BasicIO
{
public:
    BasicIO_FILE();
    virtual ~BasicIO_FILE();

    virtual void printRemain(const int remain) override; 
};

#endif
