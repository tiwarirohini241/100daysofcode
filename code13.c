//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.//

#include <stdio.h>
int main()
{
    int y;
    printf("enter year");
    scanf("%d",&y);
    if (y% 4 == 0){
        if (y % 100 == 0){
            if (y% 400 == 0){
                printf("%d is a leap year", y);
            }
            else{
                printf("%d is not a leap year", y);
            }
        }
        else{
            printf("%d is a leap year", y);
        }
    }
    else{
        printf("%d is not a leap year", y);
    }
}