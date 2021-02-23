
#include "calculator.h"
#include <stdio.h>


int main()
{
    int x;
    float celsius, fahrenheit;
    printf("1. For Fahrenheit To Celsius\n");
    printf("2. For Celsius To Fahrenheit\n");
    printf("\n\nEnter Your Choice\n");
    scanf("%d",&x);
    switch(x)
      {
        case 1:  printf("Enter temperature in fahrenheit: ");
                 scanf("%f", &fahrenheit);
                    //called function to convert fahrenheit to celsius
                 celsius = convertFahCelsius(fahrenheit);
                 printf("%.2f Fahrenheit = %.2f Celsius",fahrenheit,celsius);
                 break;
         case 2:  printf("Enter temperature in Celsius: ");
                  scanf("%f", &celsius);
                     //called function to convert celsius to fahrenheit
                  fahrenheit = convertCelFahrenheit(celsius);
                printf("%.2f Celsius = %.2f Fahrenheit",celsius, fahrenheit);
                break;
         default:  printf("\n\nInvalid input\n");
                  break;
      }
    return 0;
}