#include <stdio.h>

void printBits(int operand) {
    int cloak = 1 << 31;  // Start with the leftmost bit

    for (int i = 0; i < 32; i++) {
        // Check if the bit is set or not
        if (operand & cloak) {
            printf("1");
        } else {
            printf("0");
        }

        // Shift the cloak to the right by 1 bit
        cloak >>= 1;
    }

    printf("\n");
}

int main() {
    int operand;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &operand);

    printf("Bits representation after completion: ");
    printBits(operand);

    return 0;
}
