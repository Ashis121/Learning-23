#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char *temp = (char *)malloc(size);
    memcpy(temp, ptr1, size);
    memcpy(ptr1, ptr2, size);
    memcpy(ptr2, temp, size);
    free(temp);
}

int main() {
    int operand1 = 10, operand2 = 20;
    printf("Before swapping: operand1 = %d, operand2 = %d\n", operand1, operand2);
    swap(&operand1, &operand2, sizeof(int));
    printf("After swapping: operand1 = %d, operand2 = %d\n", operand1, operand2);

    double point1 = 3.14, point2 = 6.28;
    printf("Before swapping: point1 = %f, point2 = %f\n", point1, point2);
    swap(&point1, &point2, sizeof(double));
    printf("After swapping: point1 = %f, point2 = %f\n", point1, point2);

    char char1 = 'A', char2 = 'B';
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
