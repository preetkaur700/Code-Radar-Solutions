// Your code here...
#inlcude<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>1 && n2>1){
        printf("Same Sign");
    }else if(n1<1 && n2<1){
        printf("same Sign");
    }else{
        printf("Different Sign");
    }
}