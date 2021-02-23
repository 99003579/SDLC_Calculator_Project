#include "calculator.h"

float convertFahCelsius(float fh)
{
    return ((fh - 32) / 1.8);
}

float convertCelFahrenheit(float c)
{
    return ((c * 9.0 / 5.0) + 32.0);
}