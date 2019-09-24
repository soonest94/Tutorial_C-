#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void)
{
  int i, max, min, index;
  int array[NUMBER];
  // array[0] ~ array[4] : define an array that be able to put 5 stuffs.
  for(i = 0; i < NUMBER; i++)
  {
    scanf("%d", &array[i]);
    if(max < array[i])
    {
      max = array[i];
      index = i;
    }
  }
  printf("The largest number is %d. And it is on place no.%d.\n", max, index + 1);

  min = INT_MAX;
  for(i = 0; i < NUMBER; i++)
  {
    scanf("%d", &array[i]);
    if(min > array[i])
    {
      min = array[i];
      index = i;
    }
  }
  printf("The smallest number is %d. And it is on place no.%d.\n", min, index + 1);

  return 0;
}
