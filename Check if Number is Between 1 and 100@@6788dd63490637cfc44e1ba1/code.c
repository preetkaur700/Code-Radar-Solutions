#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>1 && N<100){
        printf("In Range");
    }else{
        printf("Out of Range");
    }
}