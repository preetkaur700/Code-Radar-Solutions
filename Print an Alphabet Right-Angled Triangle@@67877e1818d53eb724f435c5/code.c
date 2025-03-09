#include<stdio.h>
int main()
{
    char N,i,j;
    scanf("%d",&N);
    for(i='A';i<=N;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}