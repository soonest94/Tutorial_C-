#include <stdio.h>

int main(void)
{
  /*
    윤년이란,
      4년마다, 그렇지만 100년 단위일때는 윤년에 해당하지 않음.
      또한, 400년 단위일때는 어떠한 상황이든 윤년으로 간주한다.
  */

  int year;
  scanf("%d", &year);
  if((year % 4 == 0 && year % 100 != 0) || year % 400 ==0)
  {
    printf("%d is a leap year.\n", year);
  }
  else
  {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}
