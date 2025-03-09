#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i='A';i<=N;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    return 0;
}