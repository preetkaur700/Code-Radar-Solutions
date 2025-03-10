#include<stdio.h>
int main()
{
    int N,i,a[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%d",&a[i]);
    }
    int issorted=1;
    for(i=1;i<N;i++)
    {
        if(a[i]<a[i-1])
        {
            sorted=0;
            break;
        }
    }
    if (issorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}