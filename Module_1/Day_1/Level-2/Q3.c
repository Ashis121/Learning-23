#include <stdio.h>

int isVowel(char c) {
    switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int isCharVowel = isVowel(character);

    if (isCharVowel == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
