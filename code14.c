//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.//

#include <stdio.h>
int main()
{
    char letter;
    printf("enter character");
    scanf("%c",&letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
        printf("%c is a vowel",letter);
    }
    else{
        printf("%c is a consonant",letter);
    }
}