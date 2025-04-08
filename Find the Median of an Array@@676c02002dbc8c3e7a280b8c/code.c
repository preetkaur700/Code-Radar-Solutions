#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    float fa = *(float *)a;
    float fb = *(float *)b;
    if (fa < fb) return -1;
    else if (fa > fb) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    float arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    qsort(arr, n, sizeof(float), compare);

    float median;
    if (n % 2 == 1) {
        median = arr[n / 2];
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    printf("%.2f\n", median); 

    return 0;
}
