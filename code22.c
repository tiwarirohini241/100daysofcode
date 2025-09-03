Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cost, selling, percent;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cost, &selling);

    if (selling > cost) {
        percent = ((selling - cost) / cost) * 100;
        printf("Profit of %f", percent);
    } 
    else if (selling < cost) {
        percent = ((cost - selling) / cost) * 100;
        printf("Loss of %f", percent);
    } 
    else {
   
        printf("No Profit or Loss");
    }
}