#include <stdio.h>

int main() {
    float Number1, Number2, result;
    char operator;
    
    printf("Enter Number 1: ");
    scanf("%f", &Number1);
    
    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter Number 2: ");
    scanf("%f", &Number2);
    
    switch (operator) {
        case '+':
            result = Number1 + Number2;
            printf("Result: %.2f\n", result);
            break;
            
        case '-':
            result = Number1 - Number2;
            printf("Result: %.2f\n", result);
            break;
            
        case '*':
            result = Number1 * Number2;
            printf("Result: %.2f\n", result);
            break;
            
        case '/':
            if (Number2 != 0) {
                result = Number1 / Number2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }
    
    return 0;
}
