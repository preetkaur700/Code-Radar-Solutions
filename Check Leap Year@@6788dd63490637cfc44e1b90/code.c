#include <stdio.h>
// int main()
// {
//     int Year;
//     scanf("%d",&Year);
//     if((Year % 4 == 0 && Year % 100 !=0) || (Year % 400 == 0)){
//         printf("Leap Year");
//     }else{
//         printf("Not a Leap Year");
//     }
//     return 0;
// }
int main()
{
    int year;
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0){
        printf("Leap Year");
    }else{
        printf("NOt a Leap Year");
    }
    return 0;
}