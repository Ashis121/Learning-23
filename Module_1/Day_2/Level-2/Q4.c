#include <stdio.h>

#define MAX_LENGTH 100

void encode(char *str, int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char base = (ch >= 'a' && ch <= 'z') ? 'a' : 'A';
            ch = (ch - base + shift) % 26 + base;
        }

        str[i] = ch;
    }
}

void decode(char *str, int shift) {
    encode(str, -shift);
}

int main() {
    char str[MAX_LENGTH];
    int shift;

    printf("Enter a string to encode: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the shift value: ");
    scanf("%d", &shift);
    encode(str, shift);
    printf("Encoded string: %s\n", str)
    decode(str, shift);
    printf("Decoded string: %s\n", str);

    return 0;
}
