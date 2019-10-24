#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *pi;
  // Pointer Integer
  pi = (int *)malloc(sizeof(int));
  // malloc = "assign memories"
  if(pi == NULL)
  {
    printf("We failed to assign memory.\n");
    exit(1);
  }

  *pi = 100;
  printf("%d\n", *pi);
  free(pi);
  // After using a dynamic memory, you should return that memory.
  
  return 0;
}
