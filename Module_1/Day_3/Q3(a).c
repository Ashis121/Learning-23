#include <stdio.h>

int deleteDigit(int operand, int point) {
    int power = 1;
    for (int i = 0; i < point; i++) {
        power *= 10;
    }
    return (operand / (power * 10)) * power + (operand % power);
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largest = 0;
    for (int i = 0; i < 4; i++) {
        int currentNum = deleteDigit(number, i);
        if (currentNum > largest) {
            largest = currentNum;
        }
    }

    printf("Largest number after deleting a digit is: %d\n", largest);

    return 0;
}
