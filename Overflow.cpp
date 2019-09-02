#include <stdio.h>
#include <limits.h>

int main(void)
{
  int x=INT_MAX;
  //maximum of int 

  printf("Maximum of int x is %d. \n", x);
  printf("And then x+1 is %d. We call this overflow. \n", x+1);
  return 0;
}
