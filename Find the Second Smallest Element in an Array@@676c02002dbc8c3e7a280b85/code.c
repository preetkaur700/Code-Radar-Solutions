// Your code here...
#include <stdio.h>
#include <limits.h> // For INT_MAX

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > first && arr[i] < second) {
            second = arr[i];
        }
    }

    if (second == INT_MAX) {
        printf("No second smallest element (all elements might be equal)\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
