#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

void displayStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }
}

int main() {
    struct Student students[3] = {
        {101, "John", 20},
        {102, "Emily", 19},
        {103, "Michael", 21}
    };
    
    int size = sizeof(students) / sizeof(students[0]);
    
    displayStudents(students, size);
    
    return 0;
}
