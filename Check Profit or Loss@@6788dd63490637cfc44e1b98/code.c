#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf("Loss");
    }else if(n2>n1){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
}