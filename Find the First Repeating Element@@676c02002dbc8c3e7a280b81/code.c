// Your code here...
#include <stdio.h>

#define OFFSET 1000  // To handle negative numbers
#define SIZE 2001    // Range from -1000 to 1000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[SIZE] = {0};  // Frequency array initialized to 0

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i] + OFFSET]++;
    }

    // Second pass to find the first repeating element
    for (int i = 0; i < n; i++) {
        if (freq[arr[i] + OFFSET] > 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    // If no repeating element found
    printf("No repeating element\n");
    return 0;
}
