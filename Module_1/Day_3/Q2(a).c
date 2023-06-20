#include <stdio.h>

void printBits(int operand) {
    int i;
    for (i = 31; i >= 0; i--) {
        int bit = (operand >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int operand;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &operand);

    printBits(operand);

    return 0;
}
