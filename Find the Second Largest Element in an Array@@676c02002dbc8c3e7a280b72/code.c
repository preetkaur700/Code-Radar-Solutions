#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);

    int arr[N];

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    int first,second;

    if(a[0]>a[1])
    {
        a[0] = first;
        a[1] = second;

    }
    else
    {
        a[1]=first;
        a[0]=econd;
    }

    for(i=0;i<N;i++)
    {
        if(a[i]>first)
        {
            first=a[i]
        }
        else if (a[i]>second && a[i] != first)
        {
            second=a[i]
        }
        printf("%d",i)
    }

}