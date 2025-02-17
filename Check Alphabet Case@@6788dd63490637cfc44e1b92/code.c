#include <stdio.h>
int main()
{
    char pr;
    scanf("%c",&pr);
    if(pr>=A && pr<=Z){
        printf("Uppercase");
    }else if(pr>=a && pr<=z){
        printf("lowercase");
    }else{
        (printf("Not an alphabet");)
    }
}
