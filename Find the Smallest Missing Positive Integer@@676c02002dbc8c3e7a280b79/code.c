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

    
    bool present[N + 1]; 
    for (int i = 0; i <= N; i++) {
        present[i] = false;
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] <= N) {
            present[arr[i]] = true;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (!present[i]) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("%d\n", N + 1);
    return 0;
}
