//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.//

#include <stdio.h>
int main() 
{
    int x, y, z;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x + y )> z && (x + z) > y && (y + z) > x) {
        if (x == y && y == z) {
            printf("Equilateral");
        } 
        else if (x == y || y == z || x == z) {
            printf("Isosceles");
        } 
        else {
            printf("Scalene");
        }
    } 
    else{
        printf("Not a valid triangle");
    }
}