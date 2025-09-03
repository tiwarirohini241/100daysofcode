//Q24: Write a program to calculate an electricity bill based on units consumed.//

#include <stdio.h>
int main()
{
    int units,bill = 0;
    printf("Enter no. of units");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units*10;
    }
    else if (units <= 200) {
        bill = (100 * 10)+(units - 100)*15;
    }
    else {
        bill = (100 * 10)+(100 * 15)+(units - 200)*20;
    }
    printf("Bill: %d", bill);

}