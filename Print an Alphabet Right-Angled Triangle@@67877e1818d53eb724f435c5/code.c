#include<stdio.h>
int main()
{
    char i,j,N;
    scanf("%d",&N);
    for(i='A';i<=N;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}