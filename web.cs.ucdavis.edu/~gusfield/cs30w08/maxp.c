#include<stdio.h>
/* the return type of procedure max is a pointer */

int * max(int * , int *);
main()
{

int *p, x, y;
printf("Input values for x and y\n");
scanf("%d%d", &x, &y);

p = max(&x, &y);
printf("The maximum value is %d\n", *p);
}

/******************************/
int * max (int* a, int* b)
{

if (*a > *b)
  return a;
else
  return b;
}
