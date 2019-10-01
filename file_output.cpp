#include <stdio.h>

int main(void)
{
  FILE *fp = NULL;
  fp = fopen("output.txt", "w");
  // w -> Write mood, r -> Read mood
  if(fp == NULL)
  {
    printf("Fail to open the file.\n");
  }
  else
  {
    printf("Success to open the file.\n");
  }

  fputc('H', fp);
  fputc('E', fp);
  fputc('L', fp);
  fputc('L', fp);
  fputc('O', fp);
  fclose(fp);
  return 0;
}
