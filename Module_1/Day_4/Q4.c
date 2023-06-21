#include <stdio.h>
#include <math.h>

int convertToDecimal(int base, int digits[], int size) {
    int decimal = 0;
    for (int i = size - 1, j = 0; i >= 0; i--, j++) {
        decimal += digits[i] * pow(base, j);
    }
    return decimal;
}

int main() {
    int choice;
    printf("Conversion Options:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Octal to Decimal\n");
    printf("3. Hexadecimal to Decimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    int size;
    printf("Enter the size of the number: ");
    scanf("%d", &size);

    int digits[size];

    if (choice == 1) {
        printf("Enter the binary number (bit by bit):\n");
    } else if (choice == 2) {
        printf("Enter the octal number (digit by digit):\n");
    } else if (choice == 3) {
        printf("Enter the hexadecimal number (digit by digit):\n");
    } else {
        printf("Invalid choice! Please choose a number from 1 to 3.\n");
        return 0;
    }

    for (int i = size - 1; i >= 0; i--) {
        scanf("%1d", &digits[i]);
    }

    int base = (choice == 1) ? 2 : (choice == 2) ? 8 : 16;
    int decimal = convertToDecimal(base, digits, size);
    printf("Decimal value: %d\n", decimal);

    return 0;
}
