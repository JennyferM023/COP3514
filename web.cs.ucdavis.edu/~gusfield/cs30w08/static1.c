/* This is a silly example just to illustrate static variables. What we want
is a program that counts the number of times the function count is
entered. */

#include<stdio.h>
int count (void);
main()
{
int i,t, truecount;

for (i = 0; i < 1000; i++) {

if (0 == (i*i % 12)) {
	t = count();
        truecount++;
}
}
printf("%d %d\n", t, truecount);
}

/************************/

int count (void)
{
static int total = 0; /* the term ``static" means that the initialization occurs only once, rather than every time the function is entered. */

return ++total;
}
