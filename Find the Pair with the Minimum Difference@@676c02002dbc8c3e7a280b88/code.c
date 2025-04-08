// Your code here...
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    qsort(arr, n, sizeof(int), compare);  

    int minDiff = abs(arr[1] - arr[0]);
    int a = arr[0], b = arr[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    printf("(%d, %d)\n", a, b);  

    return 0;
}
