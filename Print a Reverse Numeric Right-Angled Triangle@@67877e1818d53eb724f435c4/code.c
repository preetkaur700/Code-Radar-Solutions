#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        for(j=N;j>=1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}