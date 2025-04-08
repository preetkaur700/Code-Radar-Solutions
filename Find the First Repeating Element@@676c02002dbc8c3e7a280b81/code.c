#include <stdio.h>

#define OFFSET 1000
#define SIZE 2001

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[SIZE] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i] + OFFSET]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i] + OFFSET] > 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
