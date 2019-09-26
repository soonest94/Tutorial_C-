#include <stdio.h>

int main(void)
{
  int i, j;
  int multi_table[10][10];
  for(i = 1; i <= 9; i++)
  {
    printf("\n[ %dtimes table]\n\n", i);
    for(j = 1; j <= 9; j++)
    {
      multi_table[i][j] = i * j;
      printf("%d X %d = %d\n", i, j, multi_table[i][j]);
    }
  }
  return 0;
}
