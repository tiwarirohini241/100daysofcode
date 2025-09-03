//Q18: Write a program to assign grades based on a percentage input.//

#include <stdio.h>
int main()
{
    float percent;
    printf("enter percentage");
    scanf("%f",&percent);
    if (percent<=100 && percent>=90){
        printf("Grade A");
    }
    else if (percent<90 && percent>=80){
        printf("Grade B");
    }
    else if (percent<80 && percent>=60){
        printf("Grade C");
    }
    else if (percent<60 && percent>=40){
        printf("grade D");
    }
    else if (percent<40 && percent>=30){
        printf("Grade E");
    }
    else{
        printf("fail");
    }

}