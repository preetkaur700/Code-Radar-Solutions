#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    vowel=a,e,i,o,u;
    if(a=vowel){
        printf("Vowel");
    }else if(!(a=vowel)){
        printf("Consonant");
    }else if(a=0 && a=1 && a=2 && a=3 && a=4 && a=5 && a=6 && a=7 && a=8 && a=9){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}