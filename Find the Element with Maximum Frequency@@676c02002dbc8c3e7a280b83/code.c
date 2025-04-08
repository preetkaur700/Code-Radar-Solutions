// Your code here...
#include <stdio.h>

#define OFFSET 1000
#define SIZE 2001  // Handles range from -1000 to 1000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[SIZE] = {0};

    // Read array and count frequency
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i] + OFFSET]++;
    }

    int maxFreq = 0;
    int element = arr[0];

    // Find element with maximum frequency
    for (int i = 0; i < n; i++) {
        if (freq[arr[i] + OFFSET] > maxFreq) {
            maxFreq = freq[arr[i] + OFFSET];
            element = arr[i];
        }
    }

    printf("%d\n", element);

    return 0;
}
