#include <stdio.h>
#include <limits.h>

int main() {
    int N, i;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int a[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    for (i = 0; i < N; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    if (second == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
