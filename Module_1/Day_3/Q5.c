#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallest = 9;
    int largest = 0;

    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        while (num > 0) {
            int digit = num % 10;

            if (digit < smallest) {
                smallest = digit;
            }

            if (digit > largest) {
                largest = digit;
            }

            num /= 10;
        }
    }

    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}
