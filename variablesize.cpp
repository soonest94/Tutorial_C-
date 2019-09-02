/*express size of variables*/

#include <stdio.h>

int main(void)
{
  int x;
  x=1;

  printf("Variable x is %d.\n", x);
  printf("The size of the variable x is %lu.\n", sizeof(x));
  return 0;
}
