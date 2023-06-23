#include <stdio.h>

struct student {
  int roll_number;
  char name[50];
};

void swap(struct student *s1, struct student *s2) {
  int temp_roll_number = s1->roll_number;

  s1->roll_number = s2->roll_number;
  s2->roll_number = temp_roll_number;

  char temp_name[50];
  strcpy(temp_name, s1->name);
  strcpy(s1->name, s2->name);
  strcpy(s2->name, temp_name);
}

int main() {
  struct student s1 = {1, "John"};
  struct student s2 = {2, "Mary"};

  printf("s1: roll_number = %d, name = %s\n", s1.roll_number, s1.name);
  printf("s2: roll_number = %d, name = %s\n", s2.roll_number, s2.name);

  swap(&s1, &s2);
  
  printf("s1: roll_number = %d, name = %s\n", s1.roll_number, s1.name);
  printf("s2: roll_number = %d, name = %s\n", s2.roll_number, s2.name);

  return 0;
}
