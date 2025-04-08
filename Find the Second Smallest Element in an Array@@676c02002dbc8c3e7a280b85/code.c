#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
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
        printf("-1\n");  
    } else {
        printf("%d\n", second);  
    }

    return 0;
}
