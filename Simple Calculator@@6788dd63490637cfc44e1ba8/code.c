#include <stdio.h>

int main() {
    int a, b;
    char c;

    // printf("Enter two integers:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    // Consume the newline character left in the buffer
    // getchar();

    // printf("Enter an operator (+, -, *, /):\n");
    scanf("%c", &c);

    if (c == '+') {
        printf("%d", a + b);
    } else if (c == '-') {
        printf("%d", a - b);
    } else if (c == '*') {
        printf("%d", a * b);
    } else if (c == '/') {
        if (b == 0) {
            printf("error");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
