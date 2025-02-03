#include <stdio.h>
int main()
{
    int year;
    scanf("%d",year);
    if(year%4==0)and (year!%100==0){
        printf("LeapYear");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}