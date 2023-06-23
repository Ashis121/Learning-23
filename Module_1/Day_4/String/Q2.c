#include <stdio.h>

int stringToInt(char *str) {
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int digit = str[i] - '0';
        res = res * 10 + digit;
    }
    return res;
}

int main() {
    char str[100];
    
    printf("Enter a string of digits: ");
    fgets(str, sizeof(str), stdin);
    
    int result = stringToInt(str);
    
    printf("Converted Integer: %d\n", result);
    
    return 0;
}
