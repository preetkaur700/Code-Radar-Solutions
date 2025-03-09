#include<stdio.h>
int main()
{
    int i,j,N,count;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=N;j>=i;j++)
        {
            printf("%d",j);
            count++;
        }
        printf("\n");
    }
    return 0;
}