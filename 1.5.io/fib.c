long int fib(unsigned long int n)
{
  return lround((pow(0.5+0.5*sqrt(5.0),n) -
		 pow(0.5-0.5*sqrt(5.0),n)) /
		sqrt(5.0));
}

main()
{
  printf("%d\n", fib(100));
}
