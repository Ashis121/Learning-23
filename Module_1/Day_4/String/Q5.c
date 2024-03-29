#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool validateEmail(char *email) {
    int len = strlen(email);
    int atIndex = -1;
    bool dotAfterAt = false;
    
    for (int i = 0; i < len; i++) {
        if (email[i] == '@') {
            atIndex = i;
            break;
        }
    }
    
    if (atIndex == -1 || atIndex == 0 || atIndex == len - 1) {
        return false;
    }

    for (int i = atIndex + 1; i < len; i++) {
        if (email[i] == '.') {
            dotAfterAt = true;
            break;
        }
    }
    
    return dotAfterAt;
}

int main() {
    char email[100];
    
    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = '\0';
    
    bool isValid = validateEmail(email);
    
    if (isValid) {
        printf("Valid email address.\n");
    } else {
        printf("Invalid email address.\n");
    }
    
    return 0;
}
