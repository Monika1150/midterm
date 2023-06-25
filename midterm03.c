#include <stdio.h>

#define P printf("+++++++++++++++++++++++++++++++\n");

void main() 
{
    float celsius, fahrenheit;

    P
    printf("Program Celsius to Fahrenheit\n");
    P

    printf("Enter Celsius temperature : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    P
    printf("Fahrenheit is : %.2f\n", fahrenheit);
    P

}