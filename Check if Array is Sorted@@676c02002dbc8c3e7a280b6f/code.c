#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&N[i]);
    }
    int max=a[0];
    for(i=0;i<N;i++)
    {
        if(N[i]>max){
            printf("Sorted");
        }
        else{
            printf("NOt Sorted");
        }
        return 0;
    }

}