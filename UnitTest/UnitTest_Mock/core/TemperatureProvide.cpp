#include "TemperatureProvide.hpp"
#include <iostream>

using namespace std;


void TemperatureProvide::PrintTemperature()
{ 
    cout << "Indoors temperature: " << m_IndoorsTemperature << endl;
    cout << "Outdoors temperature: " << m_OutdoorsTemperature << endl;
    
}

bool TemperatureProvide::GenerateSecretKey()
{
    cout << "GenerateSecretKey --- If Mock Success, it won't print this sentence" << endl;
    static bool flag = false;
    if(flag == false) flag = true;
    return flag;
}

bool TemperatureProvide::InitServerConnection()
{
    cout << "InitServerConnection --- If Mock Success, it won't print this sentence" << endl;
    static bool flag = false;
    if(flag == false)
    {
        GenerateSecretKey();
        flag = true;
    }
    return flag;
}

void TemperatureProvide::GetIndoorsTemperature(int &degrees)
{
    cout << "Get the Temperature from server --- If Mock Success, it won't print this sentence" << endl;
    degrees = m_IndoorsTemperature;
    PrintTemperature();
}

void TemperatureProvide::GetOutdoorsTemperature(int &degrees)
{
    cout << "Get the Temperature from server --- If Mock Success, it won't print this sentence" << endl;
    degrees = m_OutdoorsTemperature;
    PrintTemperature();
}