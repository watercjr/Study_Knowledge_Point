#pragma once

class TemperatureProvide
{
public:
    TemperatureProvide(){}
    ~TemperatureProvide(){}
    virtual void GetIndoorsTemperature(int &degrees);
    virtual void GetOutdoorsTemperature(int &degrees);
    virtual bool GenerateSecretKey();
    virtual bool InitServerConnection();

private:
    void PrintTemperature();

private:
    int m_IndoorsTemperature{30};
    int m_OutdoorsTemperature{7};
};