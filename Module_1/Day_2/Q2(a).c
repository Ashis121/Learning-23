#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    unsigned char* byte_Ptr1 = (unsigned char*)ptr1;
    unsigned char* byte_Ptr2 = (unsigned char*)ptr2;
    
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = byte_Ptr1[i];
        byte_Ptr1[i] = byte_Ptr2[i];
        byte_Ptr2[i] = temp;
    }
}

int main() {
    int operand1 = 10;
    int operand2 = 20;
    
    printf("Before swap: operand1 = %d, operand2 = %d\n", operand1, operand2);
    
    swap(&operand1, &operand2, sizeof(int));
    
    printf("After swap: operand1 = %d, operand2 = %d\n", operand1, operand2);
    
    float point1 = 3.14;
    float point2 = 2.71;
    
    printf("Before swap: point1 = %f, point2 = %f\n", point1, point2);
    
    swap(&point1, &point2, sizeof(float));
    
    printf("After swap: point1 = %f, point2 = %f\n", point1, point2);
    
    return 0;
}
