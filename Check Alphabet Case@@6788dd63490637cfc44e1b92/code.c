#include <stdio.h>
int main()
{
    char character;
    scanf("%c",&character);
    if(character >= 'A' && character <= 'Z'){
        printf("uppercase");
    }else if(character >= 'a' && character <= 'z'){
        printf("lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;

}

