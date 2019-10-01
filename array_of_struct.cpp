#include <stdio.h>
#define SIZE 5

struct student {
  int number;
  char name[20];
  double grade;   // GPA -> grade
};

int main(void)
{
  struct student list[SIZE];
  int i;

  for(i = 0; i < SIZE; i++)
  {
    printf("Put Std.No : ");
    scanf("%d", &list[i].number);
    printf("Put name : ");
    scanf("%s", list[i].name);
    printf("Put grade : ");
    scanf("%lf", &list[i].grade);
  }

  for(i = 0; i < SIZE; i++)
  {
    printf("Std.No : %d,  Name : %s,  Grade : %.1f\n", list[i].number, list[i].name, list[i].grade);
  }
  return 0;
}
