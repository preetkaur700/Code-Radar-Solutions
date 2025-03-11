// Your code here...
#include<stdio.h>
int main()
{
    char N;
    scanf("%c",&N);
    if(N=='A'){
        printf("Excellent");
    }else if(N=='B'){
        printf("Good");
    }else if(N=='C'){
        prinf("Average");
    }else if(N=='D'){
        printf("Below Average");
    }else if(N=='E'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
}
