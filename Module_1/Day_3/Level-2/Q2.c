#include <stdio.h>

unsigned char decimalToBCD(unsigned char decimal) {
    unsigned char bcd = 0;

    unsigned char tens = decimal / 10;
    unsigned char ones = decimal % 10;
    bcd = (tens << 4);
    bcd |= ones;

    return bcd;
}

int main() {
    unsigned char decimal = 72;
    unsigned char bcd;
    printf("Decimal: %d\n", decimal);
    bcd = decimalToBCD(decimal);
    printf("BCD: %02X\n", bcd);

    return 0;
}
