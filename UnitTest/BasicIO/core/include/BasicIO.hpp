#ifndef _BASIC_IO_HPP_
#define _BASIC_IO_HPP_

#include "iBasicIO.hpp"

class BasicIO : public iBasicIO
{
public:
    BasicIO();
    virtual ~BasicIO();

    virtual void add(const unsigned int n) override;
    virtual void subtract(const unsigned int n) override;

private:
    int remain_{0};
};

#endif
