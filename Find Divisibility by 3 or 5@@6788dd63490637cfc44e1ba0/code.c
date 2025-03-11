#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%3==0){
        printf("Divisible by 3");
    }else if(N%5==0){
        printf("Divisible by 5");
    }else{
        printf("Divisible by Both");
    }
}