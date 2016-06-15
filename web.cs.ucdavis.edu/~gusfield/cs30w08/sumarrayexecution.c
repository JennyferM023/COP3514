#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int sum ( int a[], int n);
main()
{
	int b[MAX], x, m = 0;
	while (m < MAX && scanf( "%d", &b[m]) != EOF ) m++;

	printf ( "%d item(s) input \n", m);
	if (m >= 1) {
		m--;
		x = sum(b, m);
		printf ( "sum = %d\n", x);
	}
	return EXIT_SUCCESS;
}

int sum( int a[], int n)
{
	int partial = 0, i; 
	for (i = 0; i <= n; i++) partial += a[i];
	return partial;
}



