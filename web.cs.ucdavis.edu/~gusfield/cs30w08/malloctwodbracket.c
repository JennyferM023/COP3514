/* This is an example of a dynamically allocated two-D array using array notation [][] rather than
pointers to access the individual elements of the two-D array */

#include<stdio.h>
#include<stdlib.h>

main()
{
int n;
int m;
int** array;
int i, j;

printf("input the two dimensions of the dynamically allocated array\n");
scanf("%d%d", &n, &m);

 array = (int**) malloc(n * sizeof(int*)); /* Creates an array of n pointers to type int. Note the explicit
                                           cast (int **)  of the pointer type returned from malloc */
   for (i = 0; i < n; i++) {
    array[i] = (int*) malloc(m * sizeof(int)); /* Each int* points to an array of m integers*/
   }

   for (i = 0; i < n; i++) {
	   for (j = 0; j < m; j++) {
		   array [i][j] = i + j;
	   }
   }

   for (i = 0; i < n; i++) {
           printf("\n");
	   for (j = 0; j < m; j++) {
		   printf ("%d, %d: %d\n", i, j, array [i][j]);
	   }
   }
}
