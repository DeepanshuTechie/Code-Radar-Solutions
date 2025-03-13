#include <stdio.h>

void func(int a) {
    if (a == 0) {
        printf('0');
        return;
    }

    int wo[32], index = 0;

    // Convert to binary and store in array
    while (a > 0) {
        wo[index++] = a % 2;
        a /= 2;
    }

    // Print the binary in correct order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", wo[i]);
    }
}

