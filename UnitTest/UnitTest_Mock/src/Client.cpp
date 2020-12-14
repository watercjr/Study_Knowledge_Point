#include "Client.hpp"
#include "../core/TemperatureProvide.hpp"

void Client::getThetemperature()
{
    m_temperatureprovide->GenerateSecretKey();
    m_temperatureprovide->InitServerConnection();
    m_temperatureprovide->InitServerConnection();
    m_temperatureprovide->GetOutdoorsTemperature(m_outtemp);
    m_temperatureprovide->GetIndoorsTemperature(m_intemp);
}