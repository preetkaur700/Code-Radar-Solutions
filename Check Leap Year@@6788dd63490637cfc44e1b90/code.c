#include <stdio.h>
int main()
{
    int Year;
    scanf("%d",&Year);
    if(Year%100==0){
    printf("%d Leap Year",Year);}
    else if(Year%4==0){
        printf("%d LeapYear",Year);
    }
    else if(Year%400==0){
        printf("%d Leap Year",Year);
    }
    else{
        printf("%d Not a Leap Year",Year);
    }
    return 0;

}