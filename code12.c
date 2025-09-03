//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.//

#include <stdio.h>

int main()
{
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    if (a<=0)
    {
        if (a<0)
        {
            printf("%d is negative", a);
        }
        else
        {
            printf("%d is zero",a);
        }
    }
    else
    {
        printf(" %d is positive",a);
    }
    
}