#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=i;j<=N;j++)
        {
            printf("%d ",j);
            
        }
        printf("\n");
    }
    return 0;
}