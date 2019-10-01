#include <stdio.h>
#include <string.h>

int main(void)
{
  char input[10] = "I Love U";
  char result[5] = "Love";
  strcpy(result, input);
  printf("Copy character : %s\n", result);
  return 0;
}
