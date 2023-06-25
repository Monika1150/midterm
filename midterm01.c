#include <stdio.h>

int main() 
{
    float r1, r2, r3;
    float rSum;

    printf("+++++++++++++++++++++++++++++++\n");
    printf("Program Resistance\n");
    printf("+++++++++++++++++++++++++++++++\n");

    printf("Enter Resistance 1 : ");
    scanf("%f", &r1);

    printf("Enter Resistance 2 : ");
    scanf("%f", &r2);

    printf("Enter Resistance 3 : ");
    scanf("%f", &r3);

    rSum = (r1 * r2 * r3) / ((r1 * r2) + (r2 * r3) + (r1 * r3));

    printf("+++++++++++++++++++++++++++++++\n");
    printf("Sum Resistance : %.2f\n", rSum);
    printf("+++++++++++++++++++++++++++++++\n");

    return 0;
}