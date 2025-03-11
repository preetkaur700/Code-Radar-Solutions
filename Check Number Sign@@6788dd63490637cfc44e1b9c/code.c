#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>0){
        printf("Positivi");
    }else if(N<0){
        printf("Negative");
    }else{
        printf("zero");
    }
}