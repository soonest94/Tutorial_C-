#include <stdio.h>

int main(void)
{
  FILE *fp = NULL;
  int c;

  fp = fopen("input.txt", "r");

  if(fp == NULL)
  {
    printf("Fail to read file.\n");
  }
  else
  {
    printf("Success to read file.\n");
  }

  while((c = fgetc(fp)) != EOF)
  {
    putchar(c);
  }

  fclose(fp);
  return 0;
}
