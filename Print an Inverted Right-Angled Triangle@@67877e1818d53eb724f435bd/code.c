#include<stdio.h>
int main i,j,N;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    for(j=N;j>=i;j--)
    {
        printf("* ")
    }
    printf("\n")
}