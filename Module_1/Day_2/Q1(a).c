#include <stdio.h>

void printExponent(double *ptr) {
    unsigned long long *exponent_Ptr = (unsigned long long *)ptr;
    unsigned long long exponent = (*exponent_Ptr & 0x7FF0000000000000) >> 52;
    
    printf("Exponent in Hex: 0x%llX\n", exponent);
    
    printf("Exponent in Binary: 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double num = 0.7;
    
    printf("Value of num: %.16f\n", num);
    
    printExponent(&num);
    
    return 0;
}
