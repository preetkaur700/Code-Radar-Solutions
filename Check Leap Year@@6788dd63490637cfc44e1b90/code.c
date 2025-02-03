#include <stdio.h>
int main()
{
    int Year;
    scanf("%d",&Year);
    if(Year%400==0)
        if(Year%100==0){
            printf("Leap Year");
        }
    else{
        printf("Not a Leap Year");
    }
}