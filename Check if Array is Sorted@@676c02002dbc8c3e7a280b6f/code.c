#include<stdio.h>
int main()
{
    int N,i,a[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int issorted=1;
    for(i=0;i<N;i++)
    {
        if(a[i]< a[i-1])
        {
            issorted=0;
            break;
        }
    }
    if(issorted){
        printf("sorted");
    }else{
        printf("not sorted");
    }
}