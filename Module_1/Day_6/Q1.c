#include <stdio.h>
#include <stdlib.h>

struct Student {
  int rollno;
  char name[20];
  float marks;
};

void parse_string(char *string, struct Student *students, int n) {
  // Initialize the student array.
  for (int i = 0; i < n; i++) {
    students[i].rollno = 0;
    strcpy(students[i].name, "");
    students[i].marks = 0.0;
  }

  // Parse the string.
  char *token;
  int i = 0;
  while ((token = strtok(string, " ")) != NULL) {
    // Get the roll number.
    if (i == 0) {
      students[i].rollno = atoi(token);
    } else if (i == 1) {
      // Get the name.
      strcpy(students[i].name, token);
    } else if (i == 2) {
      // Get the marks.
      students[i].marks = atof(token);
    }
    i++;
  }
}

int main() {
  // Get the number of inputs.
  int n;
  printf("Enter the number of inputs: ");
  scanf("%d", &n);
  struct Student *students = (struct Student *) malloc(n * sizeof(struct Student));

  char string[100];
  printf("Enter the input string: ");
  scanf("%s", string);
  parse_string(string, students, n);

  for (int i = 0; i < n; i++) {
    printf("Roll number: %d\n", students[i].rollno);
    printf("Name: %s\n", students[i].name);
    printf("Marks: %.2f\n", students[i].marks);
  }

  free(students);

  return 0;
}
