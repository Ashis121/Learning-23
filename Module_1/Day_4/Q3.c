#include <stdio.h>

void decimalToBinary(int decimal, int binary[]) {
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }
}

void decimalToOctal(int decimal, int octal[]) {
    int index = 0;

    while (decimal > 0) {
        octal[index] = decimal % 8;
        decimal /= 8;
        index++;
    }
}

void decimalToHexadecimal(int decimal, char hexadecimal[]) {
    int index = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        hexadecimal[index] = (remainder < 10) ? remainder + '0' : remainder + 'A' - 10;
        decimal /= 16;
        index++;
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int binary[32] = {0};
    int octal[32] = {0};
    char hexadecimal[32] = {0};

    decimalToBinary(decimal, binary);
    decimalToOctal(decimal, octal);
    decimalToHexadecimal(decimal, hexadecimal);

    printf("Binary: ");
    for (int i = 31; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");

    printf("Octal: ");
    for (int i = 31; i >= 0; i--)
        printf("%d", octal[i]);
    printf("\n");

    printf("Hexadecimal: ");
    for (int i = 31; i >= 0; i--)
        printf("%c", hexadecimal[i]);
    printf("\n");

    return 0;
}
