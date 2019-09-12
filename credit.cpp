#include <stdio.h>

int main(void)
{
  int score;      // This variable means a score of a student.
  scanf("%d", &score);
  if(score >= 90)
  {
    printf("Your credit is A.\n");
  }
  else if(score >= 80)
  {
    printf("Your credit is B.\n");
  }
  else if(score >= 70)
  {
    printf("Your credit is C.\n");
  }
  else
  {
    printf("Your credit is F.\n");
  }
  return 0;
}
