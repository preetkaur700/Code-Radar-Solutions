#include<stdio.h>
int main()
{
    char N,i,j;
    scanf("%c",&N);
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