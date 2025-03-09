#include<stdio.h>
int main()
{
    char N;
    int i,j;
    scanf("%c",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    return 0;
}