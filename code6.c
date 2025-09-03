//Q6: Write a program to swap two numbers using a third variable.//

#include <stdio.h>
int main()
{
    int x,y;
    printf("enter 2 numbers");
    scanf("%d %d",&x,&y);
    int z=y;
    y=x;
    x=z;
    printf("after swap: %d %d",x,y);
}