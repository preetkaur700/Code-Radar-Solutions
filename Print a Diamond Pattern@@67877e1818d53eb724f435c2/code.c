#include<stdio.h>
int main()
{
    int i,j,s,N;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        for(s = i; s < N; s++)
        printf(" ");
    }
    for(j = 1; j <= 2 * i - 1; j++)
    {
        printf("*");
    }
    printf("\n");
    
    for(i = N-1; i >= 1; i--)
    {
        for(s = i; s < N; s++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}