#include <stdio.h>

int main(void)
{
  char o;
  int x, y;
  while(1)
  {
    printf("Put your mathmatical expression: ");
    scanf("%d %c %d", &x, &o, &y);
    if(o == '+')
    {
      printf("%d %c %d = %d\n", x, o, y, x + y);
    }
    else if(o == '-')
    {
      printf("%d %c %d = %d\n", x, o, y, x - y);
    }
    else if(o == '*')
    {
      printf("%d %c %d = %d\n", x, o, y, x * y);
    }
    else if(o == '/')
    {
      printf("%d %c %d = %d\n", x, o, y, x / y);
    }
    else if(o == '%')
    {
      printf("%d %c %d = %d\n", x, o, y, x % y);
    }
    else
    {
      printf("It is incorrect input.\n");
    }
    getchar();
    printf("Do you want to quit your program? (y/n)");
    scanf("%c", &o);
    if(o == 'n' || o == 'N')
    {
      continue;
    }
    else if(o == 'y' || o == 'Y')
    {
      break;
    }
    else
    {
      printf("It is incorrect input.\n");
    }
    getchar();
  }
  return 0;
}
