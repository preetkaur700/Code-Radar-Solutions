// Your code here...
#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
