#include <stdio.h>

/* count the characters in input; 1st version */
main()
{
  double nc;
  for(nc=0; getchar()!=EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
