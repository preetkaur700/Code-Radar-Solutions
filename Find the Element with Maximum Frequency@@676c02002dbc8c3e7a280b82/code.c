// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  

    int maxFreq = 0;
    int elementWithMaxFreq;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            elementWithMaxFreq = arr[i];
        }
    }

    printf("%d\n", elementWithMaxFreq);  // Most frequent element

    return 0;
}
