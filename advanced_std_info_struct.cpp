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

  printf("Put Std.No. : ");
  scanf("%d", &s.number);
  printf("Put Std.Name : ");
  scanf("%s", s.name);
  printf("Put grade : ");
  scanf("%lf", &s.grade);

  printf("Std.No. : %d\n", s.number);
  printf("Name : %s\n", s.name);
  printf("Grade : %.1f\n", s.grade);
  return 0;
}
