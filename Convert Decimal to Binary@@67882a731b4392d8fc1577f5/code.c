#include <stdio.h>

void func(int a) {
    if (a == 0) {
        printf("0");
        return;
    }

    
    while (a > 0) {
        printf("%d", a % 2);  // Print the remainder directly
        a /= 2;               // Divide the number by 2
    }
    printf("\n");
}

int main() {
    int c;

    scanf("%d", &c);
    func(c);
    return 0;
}
