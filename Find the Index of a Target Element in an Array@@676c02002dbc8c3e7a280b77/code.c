// Your code here...
#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    int index = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);
    return 0;
}
