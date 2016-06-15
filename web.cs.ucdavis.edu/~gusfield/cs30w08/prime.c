#include<stdio.h>
main()
{
int i, j, noprime;

	for (i = 2; i <= 200; i++) {  /* note increment operator */
                noprime = 0;

		for (j = 2; j < i ; j++) {
			if (i % j == 0) {  /* note modulus operator */
                        noprime = 1; 
			break;       
/* note break from the for loop it is in */
			}
		}
        	if (noprime) printf("%d is not prime\n", i);
		else printf ("%d is prime\n",i);
          }
}
	
