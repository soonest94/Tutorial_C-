#include <stdio.h>
#include <math.h>

struct point{
  int x;
  int y;
};

int main(void)
{
  struct point p1, p2;
  int xDiff, yDiff;
  double distance;

  printf("Put coordinates of the 1st point : ");
  scanf("%d %d", &p1.x, &p1.y);
  printf("Put coordinates of the 2nd point : ");
  scanf("%d %d", &p2.x, &p2.y);

  xDiff = p1.x - p2.x;
  yDiff = p1.y - p2.y;

  distance = sqrt(xDiff * xDiff + yDiff * yDiff);
  printf("The distance of 2 points is %f.\n", distance);
  return 0;
}
