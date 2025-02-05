#include <stdio.h>
int main()
{
    int  character;
    scanf("%d",&character);
    if(character>=A && charcter <=Z){
        printf("uppercase");
    }else if(Character >= a && character <=z){
        printf("lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;

}

