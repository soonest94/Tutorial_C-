#include <stdio.h>

int getDays(int month, int day)
{
  int i, sum = 0;
  for(i = 1; i < month; i++)
  {
    if(i == 2)
    {
      sum += 28;
      // in this program, we will ignore leap years.
    }
    else if(i % 2 == 0)
    {
      sum += 30;
    }
    else
    {
      sum += 31;
    }
  }
  return sum + day;
}

int main(void)
{
  int month, day;
  scanf("%d %d", &month, &day);
  printf("The date form 1st Jan. is %d", getDays(month, day));
  return 0;
}
