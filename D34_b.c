//Q68:Delete an element from an array.//
#include <stdio.h>
int main() 
{
    int a[5], i;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of array are:\n");
    for(i=0;i<5;i++) 
    {
        printf("%d ", a[i]);
    }

    printf("\nFirst element is %d", a[0]);
    printf("\nLast element is %d", a[4]);

    return 0;
}
