#include <stdio.h>
//int main()
/*
    int isPrime(int num){

        int isPrime=1;
        if(num<=1){
            isPrime=0;
        }
        for(int i=2;i*i<=num;i++){// i<num;
            if(num%i==0){
                isPrime=0;
            }
        }
        return isPrime;
    }
*/

/*
int isPrime(int num)
{
    int i,count=0;
    for(i=2; i<=num;i++){
        if(num%i==0)
        count++;
    }
if (count == 1)
    return 1;
else
    return 0;
}
*/

int isPrime(int num)
{
    int i,count=0;
    for(i=1; i<=num;i++){
        if(num%i==0)
        count++;
    }
if (count == 2)
    return 1;
else
    return 0;
}
