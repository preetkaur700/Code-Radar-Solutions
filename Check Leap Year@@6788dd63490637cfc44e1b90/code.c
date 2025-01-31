#include <stdio.h>
int main()
{
    int Year;
    scanf("%d",&Year);
    if(Year!%100==0){
    printf("Leap Year");
    }
    else if(Year%4==0){
        printf("LeapYear");
    }
    else if(Year%400==0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;

}