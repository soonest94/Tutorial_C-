#include <stdio.h>

int main(void)
{
  char input[1001];
  gets(input);
  int count = 0;
  // HELLO
  while(input[count] != '\0')
  {
    count++;
  }
  printf("The number of characters that you input is %d.\n", count);
  printf("The character that you input : %s.\n", input);
  return 0;
}
