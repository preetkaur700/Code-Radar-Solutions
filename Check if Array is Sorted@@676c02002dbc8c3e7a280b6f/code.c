#include<stdio.h>
int main()
{
    int N,i,a[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]>max){
            printf("Not Sorted");
        }
    }
else{
    printf("Sorted");
}    
return 0;
}