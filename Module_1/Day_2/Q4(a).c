#include <stdio.h>

int countSetBits(int operand) {
    int add_up = 0;
    while (operand) {
        add_up += operand & 1;
        operand >>= 1;
    }
    return add_up;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }
    
    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }
    
    printf("Total number of set bits in the given array: %d\n", totalSetBits);
    
    return 0;
}
