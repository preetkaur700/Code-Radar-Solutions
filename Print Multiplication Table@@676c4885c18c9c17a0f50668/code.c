#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=10;i++)
    {
        int mul = N*i;
        printf("%d x %d = %d", N,i,mul);
        printf("\n");

    }
}