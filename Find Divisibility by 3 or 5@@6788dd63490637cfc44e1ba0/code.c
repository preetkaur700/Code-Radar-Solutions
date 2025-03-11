#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%3==0 && N%5==0){
        printf("Divisible by Both\n");
    }else if(N%5==0){
        printf("Divisible by 5\n");
    }else if(N%3==0){
        printf("Divisible by 3");
    }else{
        printf("Not Divisible");
    }
}