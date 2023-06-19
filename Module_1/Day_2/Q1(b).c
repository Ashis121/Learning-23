#include <stdio.h>

void Exponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent_hex = ((*ptr) >> 52) & 0x7FF;
    
    printf("Exponent in Hexadecimal: 0x%llx\n", exponent_hex);
    
    unsigned long long exponent_binary = ((*ptr) >> 52) & 0x7FF;
    
    printf("Exponent in Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent_binary >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double num = 0.7;
    
    Exponent(num);
    
    return 0;
}
