// Your code here...
#include <stdio.h>

int main() {
    int N, K, i;
    scanf("%d", &N);

    int arr[N], rotated[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &K);
    K = K % N;  // To handle cases where K > N

    for (i = 0; i < N; i++) {
        rotated[(i + K) % N] = arr[i];
    }

    for (i = 0; i < N; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
