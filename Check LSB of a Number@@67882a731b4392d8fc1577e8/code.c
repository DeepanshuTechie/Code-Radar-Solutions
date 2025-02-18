#include <stdio.h>

int main() {
    int num;

    // Get the number from the user
    // printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the least significant bit is set
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
