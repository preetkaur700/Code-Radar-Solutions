#include<stdio.h>
int main()
{
    int N,i,j,s;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(s=N;s>i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}