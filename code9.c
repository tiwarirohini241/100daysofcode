//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.//

#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t;
    printf("enter principle,rate and time");
    scanf("%f %f %f",&p,&r,&t);
    float si=((p*r*t)/100.0);
    float ci=p*pow(1+(r/100.0),time)-p;
    printf("simple interest=%f and compound interest=%f",si,ci);
}