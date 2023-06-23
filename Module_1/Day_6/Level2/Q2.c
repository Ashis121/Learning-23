#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int marks;
};

void deleteStudent(struct Student **students, int *size) {
    if (*size == 0) {
        printf("No students to delete.\n");
        return;
    }
    
    (*size)--;
    struct Student *newStudent = (struct Student*)malloc(sizeof(struct Student) * (*size));
    for (int i = 1; i <= *size; i++) {
        newStudent[i - 1] = (*students)[i];
    }
    printf("Student deleted.\n\n");
    free(*students);
    *students = newStudent;
}

void displayStudents(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student *students = NULL;
    int size = 0;
    struct Student student1 = {1, "John", 80};
    struct Student student2 = {2, "Emma", 75};
    struct Student student3 = {3, "Michael", 90};
    students = (struct Student*)malloc(sizeof(struct Student) * 3);

    students[0] = student1;
    students[1] = student2;
    students[2] = student3;
    printf("Initial Students:\n");
    displayStudents(students, 3);
    deleteStudent(&students, &size);
    printf("Students after Deletion:\n");
    displayStudents(students, size);
    free(students);
    
    return 0;
}
