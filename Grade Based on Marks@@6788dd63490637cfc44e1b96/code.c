#include<stdio.h>
int main()
{
    int A,B,C,D,F;
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&F);
    if(A>=90){
        printf("A");
    }else if(B<=80 || B>90){
        printf("B");
    }else if(C>=70 && C<80){
        printf("C");
    }else if(D>=60 && D<70){
        printf("D");
    }else if(F<60){
        printf("F");
    }
    return 0;
}