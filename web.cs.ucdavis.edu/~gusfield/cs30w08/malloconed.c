/* Example of a dynamically defined array and dynamic space allocation using malloc */

#include<stdio.h>
#include<stdlib.h>
main()
{
int i, n ;
int * p;

printf("Input the number of integers n for the dynamic array\n");
scanf("%d", &n);

p = malloc(n * sizeof(int));

for (i = 0; i < n; i++) {
/*	p[i] = i; */
	*(p + i) = i;
}

for (i = 0; i < n ; i++) {
printf("%d\n", p[i]);
}
free(p); /* This deallocates  the space assigned through malloc that p pointed to */
}
