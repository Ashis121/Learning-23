#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int marks;
};

void initializeStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &(students[i].rollNumber));
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Marks: ");
        scanf("%d", &(students[i].marks));
        
        printf("\n");
    }
}

void displayStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student students[3];
    int size = sizeof(students) / sizeof(students[0]);

    initializeStudents(students, size);
    printf("Initialized Students:\n");
    displayStudents(students, size);
    
    return 0;
}
