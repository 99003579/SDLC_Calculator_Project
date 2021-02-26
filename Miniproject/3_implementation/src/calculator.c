#include "calculator.h"

float convertFahCelsius(float fh)
{
    return ((fh - 32) / 1.8);
}

float convertCelFahrenheit(float c)
{
    return ((c * 9.0 / 5.0) + 32.0);
}
float interest(float P,float R, float T)
{
     float SimpleInterest;
     SimpleInterest=P*R*T/100.0;
     return SimpleInterest;
}
float Profit(float CostPrice, float SellingPrice)
{

   return (SellingPrice - CostPrice);
}
// Function will return Loss.
float Loss(float CostPrice, float SellingPrice)

{
    return ( CostPrice - SellingPrice);

}
int areaRectangle(int length, int width)
{
    return length * width;
}
float area(float s)
{
	return (s*s);
}
