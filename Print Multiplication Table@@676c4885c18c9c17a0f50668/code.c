#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        int mul = N*i;
        printf("%d * %d = %d", N,i,mul);
        printf("\n");

    }
}