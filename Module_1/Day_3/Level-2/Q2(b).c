#include <stdio.h>

#define DECIMAL_TO_BCD(decimal) (((decimal / 10) << 4) | (decimal % 10))

int main() {
    int decimal = 25;
    unsigned char bcd = DECIMAL_TO_BCD(decimal);
    printf("Decimal: %d\n", decimal);
    printf("BCD: 0x%02X\n", bcd);

    return 0;
}
