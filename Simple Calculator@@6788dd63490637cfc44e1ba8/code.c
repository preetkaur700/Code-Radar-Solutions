#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Taking input
    scanf("%d %d %c", &num1, &num2, &op);

    // Switch case to perform operations
    switch (op) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            // Handling division by zero case
            if (num2 == 0)
                printf("error");
            else
                printf("%d", num1 / num2);
            break;
        default:
            printf("error"); // Invalid operator case
    }

    return 0;
}
