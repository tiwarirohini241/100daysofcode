#include <stdio.h>

int main() 
{
    float n1, n2;

    printf("Enter the first number: ");
    scanf("%f", &n1);
    
    printf("Enter the second number: ");
    scanf("%f", &n2);

    
    float sum = n1 + n2;
    float difference = n1 - n2;
    float product = n1 * n2;

    printf("\nResults:");
    printf("Sum: %f", sum);
    printf("Difference: %f", difference);
    printf("Product: %f", product);

    if (n2 != 0) {
        float quotient = n1 / n2;
        printf("Quotient: %f", quotient);
    } else {
        printf("Quotient: Undefined (division by zero)");
    }

    return 0;
}
