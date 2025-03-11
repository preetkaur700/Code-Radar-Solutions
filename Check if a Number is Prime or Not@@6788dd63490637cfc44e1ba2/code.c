#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N); 
    if(N>1 && N%1==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }

}