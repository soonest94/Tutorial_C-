#include <stdio.h>

int main(void)
{
  int i = 1, sum = 0;
  while(i <= 1000)
  {
    sum = sum + i;
    i++;
  }
  printf("Summary from 1 to 1000 is %d.\n", sum);
  return 0;
}
