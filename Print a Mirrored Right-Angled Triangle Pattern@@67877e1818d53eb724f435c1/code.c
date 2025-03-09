#include<stdio.h>
int main()
{
    int s,i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(s=i;s<N;s--)
        {

        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}