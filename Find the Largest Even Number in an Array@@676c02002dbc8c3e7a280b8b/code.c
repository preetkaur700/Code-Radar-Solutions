// Your code here...
#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int maxEven = INT_MIN;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
        }
    }

    if (maxEven == INT_MIN) {
        printf("-1\n"); 
    } else {
        printf("%d\n", maxEven); 
    }

    return 0;
}
