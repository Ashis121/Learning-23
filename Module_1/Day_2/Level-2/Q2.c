#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int mappingCount = 0;

    for (int i = 0; i < size; i++) {
        int currentItem = boxA[i];
        int found = 0;

        for (int j = 0; j < size; j++) {
            if (boxB[j] == currentItem) {
                found = 1;
                break;
            }
        }

        if (found) {
            mappingCount++;
        }
    }

    if (mappingCount == size) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int size;
    printf("Enter the size of the boxes: ");
    scanf("%d", &size);

    int boxA[size], boxB[size];

    printf("Enter the items of box A: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxA[i]);
    }

    printf("Enter the items of box B: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxB[i]);
    }

    int result = compareBoxes(boxA, boxB, size);

    if (result == 1) {
        printf("One-to-one mapping exists between the boxes.\n");
    } else {
        printf("No one-to-one mapping exists between the boxes.\n");
    }

    return 0;
}
