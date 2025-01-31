#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year!%100==0){
        if(year%4==00)
        {printf("Leap Year");}
        else{printf("Not a Leap Year")}
    else{
        printf("Not a Leap Year");
    }    

    }
}