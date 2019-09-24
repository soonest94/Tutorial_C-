#include <stdio.h>

// 재귀함수(Recursive Function)
void print(int count)
{
  if(count == 0)
  {
    return;
  }
  else
  {
    printf("Print characters.\n");
    print(count - 1);
  }
}

int main(void)
{
  int number;
  printf("How many characters do you want to print?");
  scanf("%d", &number);
  print(number);
  return 0;
}
