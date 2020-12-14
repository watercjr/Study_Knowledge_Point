#ifndef _I_BASIC_IO
#define _I_BASIC_IO

class iBasicIO
{
public:
    iBasicIO() {}
    virtual ~iBasicIO() {}

    virtual void add(const unsigned int n) = 0;
    virtual void subtract(const unsigned int n) = 0;

    virtual void printRemain(const int remain) = 0; 
};

#endif
