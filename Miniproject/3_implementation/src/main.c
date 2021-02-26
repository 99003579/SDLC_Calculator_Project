
#include "calculator.h"
#include <stdio.h>
#include <math.h>


int main()
{
    int x,l,b,area;
    float celsius, fahrenheit;
    float Amount,Time,Rate,Result;
    float s,a;
    float CostPrice, SellingPrice;
    
    printf("1. For Fahrenheit To Celsius\n");
    printf("2. For Celsius To Fahrenheit\n");
    printf("3. Simple Interest\n");
    printf("4. Profit or loss\n");

    
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
          
          case 3:
                printf("Enter Principal Amount : ");
                scanf("%f",&Amount);
                printf("Enter Interest Rate : ");
                scanf("%f",&Rate);
                printf("Enter Time Period : ");
                scanf("%f",&Time);
                Result=interest(Amount,Rate,Time);
                printf("\nSimple Interest is: %.2f\n",Result);
                  break;

        case 4:
              	printf("Enter Cost Price:");
                scanf("%f",&CostPrice);
                printf("Enter SellingPrice:");
                scanf("%f",&SellingPrice);
                  if (SellingPrice == CostPrice)
                      printf("\nNo profit nor Loss\n");
                  else if (SellingPrice > CostPrice)
                      printf("\n%f Profit\n", Profit(CostPrice, SellingPrice));
                  else
                      printf("\n%f Loss\n", Loss(CostPrice, SellingPrice));
                            break;
        case 5:
                printf("Enter the length : ");
                scanf("%d", &l);
                printf("Enter the width : ");
                scanf("%d", &b);
                area = areaRectangle(l, b);
                printf("The area of the rectangle : %d", area);
                break;

        case 6:
               printf("enter side of square: ");
	             scanf("%f",&s);
	             a=areaofsquare(s);
            	 printf("AOS: %f\n",a);
	             break;     
   
         
         default:  printf("\n\nInvalid input\n");
                  break;
      }
    return 0;
}