#include<stdio.h>
int main()
{
    int pr;
    scanf("%d", &a);
    int vowel = a,e,i,o,u;
    if(pr == vowel){
        printf("Vowel");
    }else if(pr != vowel){
        printf("Consonant");
    }else if(pr <= 0 && pr>=9){
        printf("Digit")
    }else{
        printf("special character")
    }

}   