// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, count;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        count = 1;
        if (arr[i] == -1) continue;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}