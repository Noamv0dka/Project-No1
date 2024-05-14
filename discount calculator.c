#include <stdio.h>
#define DISCOUNT 0.22

int main() {
    float price;
    float totalPrice;
    printf("Enter the price of the product\n");
    scanf("%f",&price);
    totalPrice = price - (price*DISCOUNT);
    printf("the price after  a %.2f%% discount is: %.2f\n",DISCOUNT,totalPrice);
    return 0;
}