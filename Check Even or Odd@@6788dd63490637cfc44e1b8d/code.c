#include<stdio.h>
int main()
{
    int a;
    scanf("%d\n",&a);
    printf("%d",a);
    if(a>0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}