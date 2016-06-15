#include <stdio.h>
int test(int);

main()
{
int i, j, k;

i = 10;
j = 10;

printf ("before the call to test: i = %d  j = %d\n", i,j);

k = test(j);

printf ("back from the call to test: i = %d  j = %d  k = %d\n", i,j,k);

}


int test(int j)
{
int i = 10;

i++;
j++;

printf ("inside test: i = %d  j = %d\n", i,j);

return j;

}
