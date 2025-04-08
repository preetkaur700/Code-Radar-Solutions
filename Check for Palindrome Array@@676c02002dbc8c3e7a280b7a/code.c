// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1;  // Assume it is a palindrome
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - 1 - i]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
