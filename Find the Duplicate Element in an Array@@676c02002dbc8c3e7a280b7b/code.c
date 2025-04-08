// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input elements
    }

    int foundDuplicate = 0;

    // Check each element against others
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Skip if this is already counted before
        int alreadyCounted = 0;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted) continue;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            printf("%d\n", arr[i]);  
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("-1\n");  // No duplicates
    }

    return 0;
}
