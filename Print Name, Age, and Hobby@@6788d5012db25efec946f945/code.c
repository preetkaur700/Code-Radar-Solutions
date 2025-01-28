#include <stdio.h>
int main()
{
    char Name[100];
    int Age;
    char Hobby[100];
    scanf("%s",&Name);
    scanf("%d",&Age);
    scanf("%s",&Hobby);
    printf("Name: %s",Name);
    printf("Age: %d",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}