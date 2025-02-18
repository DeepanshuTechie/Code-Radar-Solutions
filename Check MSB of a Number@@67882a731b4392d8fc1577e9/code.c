#include <stdio.h>

int main() {
    int num;

    // Get the number from the user
    // printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the number of bits in an integer
    int num_bits = sizeof(int) * 8;

    // Create a mask to isolate the MSB
    int msb_mask = 1 << (num_bits - 1);

    // Check if the most significant bit is set
    if (num & msb_mask) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
