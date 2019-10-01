#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
  int number;
  char name[10];
  double grade;
};

int main(void)
{
  struct student s;
  s.number = 20150001;
  strcpy(s.name, "John Doe");
  s.grade = 4.5;
  printf("Std.No. : %d\n", s.number);
  printf("Name : %s\n", s.name);
  printf("Grade : %.1f\n", s.grade);
  return 0;
}
