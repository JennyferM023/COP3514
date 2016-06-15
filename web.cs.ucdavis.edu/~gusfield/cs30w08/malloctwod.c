/* Example of a two dimensional dynamically defined array and dynamic space allocation using malloc */
/* This example uses pointers and pointer arithmetic to get access to the individual array elements - hence
no square brackets at at all. */

#include<stdio.h>
#include<stdlib.h>
main()
{
int i,j, k, n,m ;
int * p;

printf("Input the two dimensions of the dynamically allocated array \n");
scanf("%d%d", &n, &m);

p = malloc(n*m * sizeof(int));

for (i = 0; i < n; i++) {
	for (j = 0; j < m; j++) {
		
        k = i*m + j;
	*(p + k) = i+j; 
        }
}

for (i = 0; i < n; i++) {
	for (j = 0; j < m; j++) {
        k = i*m + j;
      /* printf("%d, %d: %d\n", i,j, *(p+k)); */
       printf("%d ", *(p+k));
        }
    printf("\n");
}
    printf("\n");


/* here we print out the array with the order of the columns reversed */
for (i = 0; i < n; i++) {
	for (j = m-1; j > -1 ; j--) {
        k = i*m + j;
       printf("%d ", *(p+k));
        }
    printf("\n");
}
    printf("\n");
}
