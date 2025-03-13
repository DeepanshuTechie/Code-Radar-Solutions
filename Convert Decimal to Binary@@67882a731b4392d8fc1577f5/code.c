#include <stdio.h>

void func(int a) {
    if (a == 0) {
        printf("0");
        return;
    }

    printf("Binary: ");
    while (a > 0) {
        printf("%d", a % 2);  // Print the remainder directly
        a /= 2;               // Divide the number by 2
    }
    printf("\n");
}

int main() {
    int c;
    printf("Enter a decimal number: ");
    scanf("%d", &c);
    func(c);
    return 0;
}
;
}