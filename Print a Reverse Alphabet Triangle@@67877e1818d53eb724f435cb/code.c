#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=N;j<=N;j++)
        {
            printf("%c ",j);

        }
        printf("\n");
    }
    return 0;
}