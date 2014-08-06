#include <stdio.h>

/* count chars in input */
int main()
{
  double nc;

  nc = 0;
  // while (getchar() != EOF)
  //  ++nc;
  for(nc=0; getchar() != EOF; ++nc)
    ;
  printf("count: %.0f\n", nc);

  return 0;
}
