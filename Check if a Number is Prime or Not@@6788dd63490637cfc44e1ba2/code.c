#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N); 
    if(N%2==0){
        printf("Not Prime");
    }else if(N>=1&& N%1==0){
        printf("Prime");
    }
        
}