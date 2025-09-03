//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.//

#include <stdio.h>
int main() 
{
    int d;
    printf("Enter a number: ");
    scanf("%d", &d);
    switch(d) {
        case 1:
            printf("Monday");
        case 2:
            printf("Tuesday");
        case 3:
            printf("Wednesday");
        case 4:
            printf("Thursday");
        case 5:
            printf("Friday");
        case 6:
            printf("Saturday");
        case 7:
            printf("Sunday");
        default:
            printf("Invalid");
    }
}