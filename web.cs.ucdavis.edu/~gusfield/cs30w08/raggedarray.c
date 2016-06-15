/* An introduction to  pointers and ragged multidimensional arrays */
#include <stdio.h>
#include <stdlib.h>

void printnames (char ** p, int n); /* p is a pointer to a pointer that points to a char */

main()
{
	char* phys[4] = {"Newton", "Einstein", "Fermi", "Heisenberg"}; /* phys is an array of 4 pointers,
                                                                       each to a char at the head of a 
                                                                       string */
	printnames(phys, 4); /* the name of an array is an alias for the address of the first entry in
                             the array. In this case, that is the address of the first pointer in phys */
}

/*********************************/

void printnames (char ** p, int n)   /* p is a pointer that points not to a char, but to a pointer
                                        to char. Since those pointers come from phys, each of those
                                        pointers point to a char at the head of a string. What is passed
                                        (by value) to p, is the address of the first pointer in the array 
                                        phys, so to actually refer to that first pointer, we use *p.
                                        That is the essential  and subtle point */
{
int i;
for (i = 0; i < n; i++){
 	printf("%s\n", *p);
	p++;                           /* since p points to a particular pointer,  depending
                                      on the value of p, *p specifies that pointer, which points to the
                                       head of a string, and that string then can
                                      be printed using %s, and the pointer that p points to can be
                                      incremented by p++. Rember that when using %s, we need to supply
                                      the address where the string begins */
}
}
