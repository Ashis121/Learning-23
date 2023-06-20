#include <stdio.h>

int findLargestAfterDeletion(int operand) {
    int largest = 0;

    for (int i = 0; i < 4; i++) {
        int divisor = 1;

        // Delete a digit by dividing the number by 10^i
        int discardNum = (operand / (divisor * 10)) * divisor + (operand % divisor);

        if (discardNum > largest) {
            largest = discardNum;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int operand;
    printf("Enter a 4-digit number: ");
    scanf("%d", &operand);

    int largestNum = findLargestAfterDeletion(operand);
    printf("Largest number after deleting a digit: %d\n", largestNum);

    return 0;
}
