#pragma once

class TemperatureProvide
{
public:
    TemperatureProvide(){}
    ~TemperatureProvide(){}

    void GetIndoorsTemperature(int &degrees);
    void GetOutdoorsTemperature(int &degrees);
    void PrintTemperature();

private:
    int m_IndoorsTemperature{30};
    int m_OutdoorsTemperature{7};
};