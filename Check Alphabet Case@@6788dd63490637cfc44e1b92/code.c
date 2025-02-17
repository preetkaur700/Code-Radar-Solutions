#include <stdio.h>
int main()
{
    char pr;
    scanf("%c",&pr);
    if(pr>='A' && pr<='Z'){
        printf("Uppercase");
    }else if(pr>='a' && pr<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
}
