#include <stdio.h>

main()
{
  int c;

  while((c = getchar())!=EOF)
    if((c!=EOF)==0) printf("zero\n");
    else if((c!=EOF)==1) printf("one\n");
    else putchar(c);
}
