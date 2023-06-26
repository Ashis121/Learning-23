#include <stdio.h>

unsigned char setBit(unsigned char num, int pos) {
    return num | (1 << pos);
}
unsigned char clearBit(unsigned char num, int pos) {
    return num & ~(1 << pos);
}
unsigned char toggleBit(unsigned char num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    unsigned char num = 0b01101001;

    printf("Original Number: %d\n", num);
    printf("Binary Representation: %08b\n", num);
    
    num = setBit(num, 3);
    printf("After Setting Bit 3: %d\n", num);
    printf("Binary Representation: %08b\n", num);

    num = clearBit(num, 6);
    printf("After Clearing Bit 6: %d\n", num);
    printf("Binary Representation: %08b\n", num);

    num = toggleBit(num, 2);
    printf("After Toggling Bit 2: %d\n", num);
    printf("Binary Representation: %08b\n", num);

    return 0;
}
