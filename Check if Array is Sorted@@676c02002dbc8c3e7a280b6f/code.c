#include<Stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]>max){
            printf("Sorted");
        }
        else{
            printf("NOt Sorted");
        }
        return 0;
    }

}