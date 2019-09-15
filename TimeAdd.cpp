#include <stdio.h>

// global variations
int hour;
int minute;
int minuteAdd;

void counter()
{
  minute += minuteAdd;
  hour += minute / 60;
  minute %= 60;
  hour %= 24;
}

int main(void)
{
  printf("Put a hour: ");
  scanf("%d", &hour);
  printf("Put a minute: ");
  scanf("%d", &minute);
  printf("Put a minute that you want to add: ");
  scanf("%d", &minuteAdd);
  counter();
  printf("Result is %d:%d.\n", hour, minute);
  return 0;
}
