//Q8: Write a program to find and display the sum of the first n natural numbers.//

#include <stdio.h>

int main()
{
    int a,i;
    printf("enter number:");
    scanf("%d",&a);
    int sum=0;
    for (i = 1; i <= a; i++) 
    {
        sum += i;
    }
    printf("The sum is:%d", sum);
}