#include <stdio.h>

struct student {
  int roll_number;
  char name[50];
  float marks;
};

int main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);
  struct student students[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_number);
    printf("Enter the name of student %d: ", i + 1);
    fgets(students[i].name, sizeof(students[i].name), stdin);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &students[i].marks);
  }
  float average_marks = 0.0;
  for (int i = 0; i < n; i++) {
    average_marks += students[i].marks;
  }
  average_marks /= n;
  printf("The students scoring above the average marks are:\n");
  for (int i = 0; i < n; i++) {
    if (students[i].marks > average_marks) {
      printf("Roll number: %d\n", students[i].roll_number);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.1f\n", students[i].marks);
    }
  }
  printf("The students scoring below the average marks are:\n");
  for (int i = 0; i < n; i++) {
    if (students[i].marks < average_marks) {
      printf("Roll number: %d\n", students[i].roll_number);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.1f\n", students[i].marks);
    }
  }

  return 0;
}
