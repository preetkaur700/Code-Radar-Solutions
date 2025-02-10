#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c){
        printf("Valid");
    }else{
        prinf("Invalid");
    }
    return 0;
}