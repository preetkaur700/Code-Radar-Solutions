#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    if(A>=90){
        printf("A");
    }else if(A>=80 && A<90){
        printf("B");
    }else if(A>=70 && A<80){
        printf("C");
    }else if(A>=60 && A<70){
        printf("D");
    }else if(A<60){
        printf("F");
    }
    return 0;
}