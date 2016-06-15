#include<stdio.h>
/* This illustrates a better way to write the loop shown in program loop1.c. It works
even when x if a float rather than a long double */

main()
{

float x;
int i;
  for (i= 0, x = 0; i <= 200 ; i++,  x = x + 0.1) {
	printf(" x = %.2f\n", x);
  }
}
