/* An introduction to  pointers and multidimensional arrays */
#include <stdio.h>
#include <stdlib.h>

void printnames (char p[][11], int n);

main()
{
	char phys[4][11] = {"Newton", "Einstein", "Fermi", "Heisenberg"};
	printnames(phys, 4);
}

/*********************************/

void printnames (char p[][11], int n)   /* p is a pointer that points not to a char, but to a pointer that points to
					a particular length 11
                                        array of char in a two dimensional array. 
                                        That is the essential  and subtle point */
{
int i;
for (i = 0; i < n; i++){
 	printf("%s\n", *p);
	p++;                           /* since p points to a particular length 11 array of char,  depending
                                      on the value of p, *p specifies that array of char, which can then
                                      be printed using %s, and which length-11 array p points to can be
                                      incremented by p++  */
}
}
