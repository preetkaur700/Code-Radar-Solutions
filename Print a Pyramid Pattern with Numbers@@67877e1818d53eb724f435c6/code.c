#include<stdio.h>
int main()
{
    int N,count=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        for(int s=1;s<N;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d", j,count);
            count++
        }
        return 0;
    }
}