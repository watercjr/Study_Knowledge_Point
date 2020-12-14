#include <stdio.h>
#include <iostream>
#include "Client.hpp"
#include "core/TemperatureProvide.hpp"

int main()
{
    printf("Main -- Hello World!");
    TemperatureProvide TP;
    Client client(&TP);
    client.getThetemperature();

    return 0;
}