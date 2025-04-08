// Your code here...
#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    scanf("%d", &target);  

    int used[1000] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == target && !used[i] && !used[j]) {
                int a = arr[i], b = arr[j];
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == a && arr[k+1] == b) || (arr[k] == b && arr[k+1] == a)) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("(%d, %d)\n", arr[i], arr[j]);
                    used[j] = 1;  
                }
            }
        }
    }

    return 0;
}
