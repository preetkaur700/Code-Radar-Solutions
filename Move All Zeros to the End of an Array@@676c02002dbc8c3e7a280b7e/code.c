// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the rest of the array with zeros
    while (index < N) {
        arr[index++] = 0;
    }

    // Output the modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
