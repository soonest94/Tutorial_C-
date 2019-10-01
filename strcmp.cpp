#include <stdio.h>
#include <string.h>

int main(void)
{
  char inputOne[5];
  char inputTwo[5];
  printf("Put a character : ");
  scanf("%s", inputOne);
  printf("Put a character : ");
  scanf("%s", inputTwo);
  printf("Compare character : %d\n", strcmp(inputOne, inputTwo));
  return 0;
}
