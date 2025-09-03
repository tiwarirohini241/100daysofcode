//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.//

#include <stdio.h>
int main()

{
    int seconds;
    printf("enter time in seconds");
    scanf("%d",&seconds);  
    int hours = seconds/3600;          
    int minutes = (seconds % 3600) / 60; 
    int second = (seconds % 60);      
    printf("%d:%d:%d", hours, minutes, second);
}