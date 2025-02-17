#include<stdio.h>
int main()
{
    char pr;
    scanf("%c", &pr);
    if pr == ('a' || pr == 'e' || pr == 'i' || pr == 'o' ||pr == 'u' && pr == 'A' || pr == 'E' || pr == 'I' || pr == 'O' || pr == 'U'){
        printf("Vowel");
    }else if(pr >= 'a' && pr <= 'z') || (pr >= 'A' && pr <= 'Z'){
        printf("consonant");
    }else if(pr >= '0' && pr <= '9'){
        printf("Digit");
    }else{
        printf("special character");
    }

}   