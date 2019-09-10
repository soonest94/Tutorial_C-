#include <stdio.h>
#include <math.h>
// math.h is including pow(), abs().

int main(void)
{
  double a, n, x;
  scanf("%lf %lf", &a, &n);
  x = pow(a, n);
  // pow(a, n) == a^n
  printf("%.0f^%.0f = %.0f\n", a, n, x);
  return 0;
}
