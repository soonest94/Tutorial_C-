#include <stdio.h>

int main(void)
{
  int number, x, i, sum = 0;
  printf("Put a number of integer: ");
  scanf("%d", &number);
  for(i = 0; i < number; i++)
  {
    printf("Put a integer: ");
    scanf("%d", &x);
    sum += x;
  }
  printf("The total sum of integers is %d.\n", sum);
  return 0;
}
