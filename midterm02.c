#include <stdio.h>

#define P printf("+++++++++++++++++++++++++++++++\n");

void main() 
{
    int productID;
    char productName[50];
    float productPrice;
    float productSale;
    float discountedPrice;
    float finalPrice;

    P
    printf("Program Price Sale\n");
    P

    printf("Product ID : ");
    scanf("%d", &productID);

    printf("Product Name : ");
    scanf("%s", productName);

    printf("Product Price : ");
    scanf("%f", &productPrice);

    productSale = productPrice * 0.25;
    discountedPrice = productPrice - productSale;
    finalPrice = discountedPrice + (discountedPrice * 0.07);

    P
    printf("Product Sale : %.2f\n", finalPrice);
    P

    getch();
}