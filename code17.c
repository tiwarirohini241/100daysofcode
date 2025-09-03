//Q17: Write a program to find the roots of a quadratic equation and categorize them.//

#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z, discm, r1, r2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &x, &y, &z);

    disc = y * y - 4 * x * z;

    if (discm > 0) 
    {
        r1 = (-y + sqrt(discm)) / (2 * x);
        r2 = (-y - sqrt(discm)) / (2 * x);
        printf("Roots are real and different: %f, %f", r1, r2);
    }
    else if (discm == 0) 
    {
        r1 = -y / (2 * x);
        printf("Roots are real and same: %f", r1);
    }
    else
     {
        real = -y / (2 * x);
        imag = sqrt(-discm) / (2 * x);
        printf("Roots are complex: %f + %fi , %f - %fi", real, imag, real, imag);
    }
}