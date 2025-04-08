// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Create a boolean array to mark presence of positive numbers
    bool present[N + 1]; // index 1 to N
    for (int i = 0; i <= N; i++) {
        present[i] = false;
    }

    // Mark the elements that are present in the array
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] <= N) {
            present[arr[i]] = true;
        }
    }

    // Find the first index that is false
    for (int i = 1; i <= N; i++) {
        if (!present[i]) {
            printf("%d\n", i);
            return 0;
        }
    }

    // If all 1 to N are present, then the missing number is N+1
    printf("%d\n", N + 1);
    return 0;
}
