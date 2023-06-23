#include <stdio.h>
#include <string.h>

void rotateString(char *str, int rotation, char direction) {
    int len = strlen(str);
    rotation %= len;  // Normalize rotation value to handle larger rotations
    
    if (direction == 'L' || direction == 'l') {
        // Left rotation
        for (int i = 0; i < rotation; i++) {
            char temp = str[0];
            for (int j = 0; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = temp;
        }
    } else if (direction == 'R' || direction == 'r') {
        // Right rotation
        for (int i = 0; i < rotation; i++) {
            char temp = str[len - 1];
            for (int j = len - 1; j > 0; j--) {
                str[j] = str[j - 1];
            }
            str[0] = temp;
        }
    }
}

int main() {
    char str[100];
    int rotation;
    char direction;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the number of rotations: ");
    scanf("%d", &rotation);
    
    printf("Enter the rotation direction (L/R): ");
    scanf(" %c", &direction);
    
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original String: %s\n", str);
    rotateString(str, rotation, direction);
    printf("Rotated String: %s\n", str);
    
    return 0;
}
