#include <stdio.h>

int findMax(int operand1, int operand2) {
    if (operand1 > operand2) {
        return operand1;
    } else {
        return operand2;
    }
}

int main() {
    int a = 10;
    int b = 20;
    int max = findMax(a, b);

    printf("The biggest number is: %d\n", max);

    return 0;
}
