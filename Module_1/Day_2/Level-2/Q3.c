#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareNames(const void *a, const void *b) {
    const char **nameA = (const char **)a;
    const char **nameB = (const char **)b;

    return strcmp(*nameA, *nameB);
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);

    printf("Original names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", names[i]);
    }

    qsort(names, size, sizeof(names[0]), compareNames);

    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", names[i]);
    }

    return 0;
}
