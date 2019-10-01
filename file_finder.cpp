#include <stdio.h>
#include <string.h>

int main(void)
{
  FILE *fp;
  char fname[256];
  char buffer[256];
  char word[256];
  int line = 0;

  printf("Put the file name : ");
  scanf("%s", fname);

  printf("Put the word what you want to find : ");
  scanf("%s", word);

  if((fp = fopen(fname, "r")) == NULL)
  {
    fprintf(stderr, "Disable to open %s.\n", fname);
    return 0;
  }
  
  while(fgets(buffer, 256, fp))
  {
    line++;
    if(strstr(buffer, word))
    {
      printf("Line No.%d : the word \"%s\" is found.\n", line, word);
    }
  }

  fclose(fp);
  return 0;
}
