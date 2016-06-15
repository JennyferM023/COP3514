#include<stdio.h>
/* this illustrates a problem with using floating point in the continuation condition of 
a for loop - try it. */

main()
{

long double x;

  for (x = 0; x <= 20.0 ; x = x + 0.1) {
	printf(" x = %Lf\n", x);
  }
}
