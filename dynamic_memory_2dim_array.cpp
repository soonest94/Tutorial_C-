#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, x, y;
  int** pptr = (int**)malloc(sizeof(int*) * 8);
  // Making 8 places.
  for(i = 0; i < 8; i++)
  {
    *(pptr + i) = (int *)malloc(sizeof(int) * 6);
    /* Let make 6 places inside each 8 places that we made before.
       And those 8 places are pointing the 1st place of these 6.
       This is same concept with 6x8 array.*/
  }

  for(y = 0; y < 8; y++)
  {
    for(x = 0; x < 6; x++)
    {
      *(*(pptr + y) + x) = 6 * y + x;
      /* 1st y axis -> 0, 1, 2, 3, 4, 5
         2nd y axis -> 6 * 1 + (0, 1, 2, 3, 4, 5)
                    => 6, 7, 8, 9, 10, 11
      */
    }
  }

  for(y = 0; y < 8; y++)
  {
    for(x = 0; x < 6; x++)
    {
      printf("%3d", *(*(pptr + y) + x));
    }
    printf("\n");
  }

  for(y = 0; y < 8; y++)
  {
    free(*(pptr + y));
  }
  return 0;
}
