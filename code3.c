Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int length;
    int width;
    printf("enter length and width");
    scanf("%d %d",&length,&width);
    int area=length*width;
    int perimeter=(2*length)+(2*width);
    printf("area=%d perimeter=%d",area,perimeter);
}