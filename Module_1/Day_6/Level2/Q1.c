#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int marks;
};

void addStudent(struct Student **students, int *size) {
    struct Student *newStudent;
    (*size)++;
    newStudent = (struct Student*)malloc(sizeof(struct Student) * (*size));
    
    for (int i = 0; i < (*size) - 1; i++) {
        newStudent[i] = (*students)[i];
    }
    printf("Enter details for the new student:\n");
    
    printf("Roll Number: ");
    scanf("%d", &(newStudent[(*size) - 1].rollNumber));
    
    printf("Name: ");
    scanf("%s", newStudent[(*size) - 1].name);
    
    printf("Marks: ");
    scanf("%d", &(newStudent[(*size) - 1].marks));
    
    printf("\n")
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
    
   
