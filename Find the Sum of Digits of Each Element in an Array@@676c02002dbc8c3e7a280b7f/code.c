#include <stdio.h>
#include <stdlib.h> // For abs()

// Function to compute sum of digits (with abs for negatives)
int sumOfDigits(int num) {
    num = abs(num); // Make the number positive
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", sumOfDigits(arr[i]));
    }

    return 0;
}
