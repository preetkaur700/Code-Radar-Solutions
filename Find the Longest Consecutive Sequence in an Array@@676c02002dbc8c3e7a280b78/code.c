// Your code here...
#include <stdio.h>
#include <stdlib.h>

// Function to compare integers (for qsort)
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, N, sizeof(int), compare);

    int longest = 1, current = 1;

    for (int i = 1; i < N; i++) {
        // Skip duplicates
        if (arr[i] == arr[i - 1])
            continue;
        else if (arr[i] == arr[i - 1] + 1)
            current++;
        else
            current = 1;

        if (current > longest)
            longest = current;
    }

    printf("%d\n", longest);
    return 0;
}
