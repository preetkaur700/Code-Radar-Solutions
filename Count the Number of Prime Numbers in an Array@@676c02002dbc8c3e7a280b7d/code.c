// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (isPrime(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
