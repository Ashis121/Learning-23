#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box *boxPtr) {
    double lw = boxPtr->length * boxPtr->width;
    double wh = boxPtr->width * boxPtr->height;
    double hl = boxPtr->height * boxPtr->length;
    
    return 2 * (lw + wh + hl);
}

int main() {
    struct Box box;
    struct Box *boxPtr = &box;
    
    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%lf", &(boxPtr->length));
    printf("Width: ");
    scanf("%lf", &(boxPtr->width));
    printf("Height: ");
    scanf("%lf", &(boxPtr->height));
    
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    
    printf("Volume of the box: %.2lf\n", volume);
    printf("Total surface area of the box: %.2lf\n", surfaceArea);
    
    return 0;
}
