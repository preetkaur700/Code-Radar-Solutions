#include<stdio.h>
int main()
{
    int N,a[100],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=1;i<N;i++)
    {
        //if(a[i]<min)
        min=a[i];
    }
    printf("%d ",min);
    int max=a[0];
       for(i=0;i<N;i++)
    {
        min=a[i];
    }
    printf("%d ",min);
}