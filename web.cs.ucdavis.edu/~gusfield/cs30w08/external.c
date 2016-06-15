/* An example of an external or global variable i - don't try this at home!" */

#include<stdio.h>
int i;  /* i is an external variable because it is declared outside of any function, including main */

void example (int);

main()
{
int j;
i = 3;
j = 4;
example (j);
printf("%d %d\n", i, j);
}

/**************/
void example( int j)
{
j = 18;
i = 22;
}

