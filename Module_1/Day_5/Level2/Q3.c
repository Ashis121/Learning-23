#include <stdio.h>

struct student {
  int roll_number;
  char name[50];
};

struct student *modify_student_details(struct student *student) {
  student->roll_number = 100;
  strcpy(student->name, "Bard");

  return student;
}

int main() {
  struct student student = {1, "John"};
  struct student *modified_student = modify_student_details(&student);
  printf("Roll number: %d\n", modified_student->roll_number);
  printf("Name: %s\n", modified_student->name);

  return 0;
}
