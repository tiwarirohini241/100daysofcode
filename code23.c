//Q23: Write a program to calculate a library fine based on late days.//

#include <stdio.h>
int main()
{
    int d, fin = 0;
    printf("Enter number of late days:");
    scanf("%d", &d);
    if (d <= 0) {
        printf("No Fine");
    }
    else if (d <= 5) {
        fin = day * 2;
        printf("Fine %d", fin);
    }
    else if (d <= 10) {
        fine = day * 4;
        printf("Fine %d", fin);
    }
    else if (d <= 30) {
        fin = d * 6;
        printf("Fine %d", fin);
    }
    else {
        printf("Membership Cancelled");
    }

}