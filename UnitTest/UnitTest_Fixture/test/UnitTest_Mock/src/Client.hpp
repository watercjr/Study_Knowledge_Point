#pragma once

#include "../core/TemperatureProvide.hpp"

class Client
{
public:
    Client(TemperatureProvide *ptr){
        m_temperatureprovide = ptr;
    }
    ~Client(){
    }
    void getThetemperature();

private:
    TemperatureProvide *m_temperatureprovide;
    int m_outtemp{0};
    int m_intemp{0};
};