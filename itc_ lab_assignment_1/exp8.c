#include <stdio.h>

int main(){
    int product_ID;
    float price;
    float rating;
    char code;

    printf("Enter product ID: ");
    scanf("%d",&product_ID);
    printf("Enter product price: ");
    scanf("%f",&price);
    printf("Enter product rating: ");
    scanf("%f",&rating);
    printf("Enter category code: ");
    scanf(" %c",&code);

    printf("\n======= PRODUCT DETAILS =======\n");
    printf("Product ID    : %d\n",product_ID);
    printf("Price         : Rs. %.2f \n",price);
    printf("Rating        : %.1f \n",rating);
    printf("Category      : %c\n",code);
    printf("==================================");

    return 0;
}