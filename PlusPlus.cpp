#include <stdio.h>

int main(void)
{
  int x = 0;
  printf("x = %d. \n", x);
  x++;
  printf("x++ = %d. \n", x);
  printf("x-- = %d. \n", x--);
  printf("x = %d. \n", x);
  printf("--x = %d. \n", --x);
  return 0;
}
