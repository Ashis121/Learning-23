#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    int marks;
};

void sortStudents(struct Student students[], int size) {
    struct Student temp;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the students
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
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

void searchStudentByName(struct Student students[], int size, char searchName[]) {
    int found = 0;
    
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    struct Student students[3];
    int size = sizeof(students) / sizeof(students[0]);
    char searchName[50];
    
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
    
    sortStudents(students, size);
    printf("Sorted Students:\n");
    displayStudents(students, size);
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    
    searchStudentByName(students, size, searchName);
    
    return 0;
}
