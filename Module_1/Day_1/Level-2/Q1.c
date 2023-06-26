#include <stdio.h>

int findGreatest(int operand1, int operand2, int operand3) {
    if (operand1 >= operand2 && operand1 >= operand3) {
        return operand1;
    }
    else if (operand2 >= operand1 && operand2 >= operand3) {
        return operand2;
    }
    else {
        return operand3;
    }
}

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int greatest = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);
    
    return 0;
}
