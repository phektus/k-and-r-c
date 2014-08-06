#include <stdio.h>

#define LOWER 0;
#define UPPER 300;
#define STEP 20;

/* print Celcius-Fahrenheit table
   for fahr = 0, 20, ..., 300 */
main()
{
  int cels;

  printf("Celsius\tFahrenheit\n");
  for(cels=LOWER; cels<=UPPER; cels=cels+STEP) 
    printf("%3d\t%6.1f\n", 
	  cels, 
	  ((cels*(9.0/5.0))+32.0));
}
