#include <stdio.h>

int findCharType(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    else if (c >= 'a' && c <= 'z') {
        return 2;
    }
    else if (c >= '0' && c <= '9') {
        return 3;
    }
    else if (c >= 32 && c <= 126) {
        return 4;
    }
    else {
        return 5;
    }
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int charType = findCharType(character);

    switch (charType) {
        case 1:
            printf("Type: Uppercase letter\n");
            break;
        case 2:
            printf("Type: Lowercase letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Type: Unknown\n");
            break;
    }

    return 0;
}
