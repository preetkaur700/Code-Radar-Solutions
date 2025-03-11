#include<stdio.h>
int main()
{
    int personage;
    scanf("%d",&personage);
    if(personage>18){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}