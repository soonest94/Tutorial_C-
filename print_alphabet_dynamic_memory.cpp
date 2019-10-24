#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *pc = NULL;
  int i = 0;
  pc = (char *)malloc(100 * sizeof(char));
  if(pc == NULL)
  {
    printf("We failed to assign dynamic memories.\n");
    exit(1);
  }
  /* This means, let the pointer that pointed by 'pc' 
     increase 1 by 1 and insert alphabet(small letters) in the same time.*/
  
  for(i = 0; i < 26; i++)
  {
    *(pc + i) = 'a' + i;
  }
  *(pc + i) = 0;
  // 0 in ascii code means NULL.
  
  printf("%s\n", pc);
  free(pc);
  return 0;
}
