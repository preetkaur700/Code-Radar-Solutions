#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        for(int s=N;s<i;s--)
        {
            printf(" ");

        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
}