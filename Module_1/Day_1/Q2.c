#include <stdio.h>

int findBiggest(int operand1, int operand2) {
    int biggest = (operand1 > operand2) ? operand1 : operand2;
    return biggest;
}

int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    int result = findBiggest(number1, number2);
    printf("The biggest number is: %d\n", result);
    
    return 0;
}
