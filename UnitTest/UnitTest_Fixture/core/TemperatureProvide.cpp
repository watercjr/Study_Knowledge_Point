#include "TemperatureProvide.hpp"
#include <iostream>

using namespace std;


void TemperatureProvide::PrintTemperature()
{ 
    cout << "Indoors temperature: " << m_IndoorsTemperature << endl;
    cout << "Outdoors temperature: " << m_OutdoorsTemperature << endl;
    
}

void TemperatureProvide::GetIndoorsTemperature(int &degrees)
{
    cout << "Get the Temperature from server" << endl;
    degrees = m_IndoorsTemperature;
}

void TemperatureProvide::GetOutdoorsTemperature(int &degrees)
{
    cout << "Get the Temperature from server" << endl;
    degrees = m_OutdoorsTemperature;
}