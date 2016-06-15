
#include<stdio.h>
main()
{
int i, j, noprime, lastprime = 1, numprimes = 0, numbertwin = 0, twingoal = 0, range;
float ratio, percentprime, percenttwin;

	printf("How many twin primes do you want to find?\n");
	scanf("%d", &twingoal);

	for (i = 2; numbertwin < twingoal; i++) {  /* note increment operator */
                noprime = 0;

		for (j = 2; j < i ; j++) {
			if (i % j == 0) {  /* note modulus operator */
                        noprime = 1; 
			break;       
/* note break from the for loop it is in */
			}
		}
        	if (noprime) printf("%d is not prime.\n", i);
		else {
			printf ("%d is prime ",i);
			numprimes++;
			if (i- lastprime  == 2) {
			   printf ("and is the second prime in the twin prime pair %d, %d. \n", lastprime, i);
			   numbertwin++;
			}
                        else {
				printf("but not the second prime in a twin prime pair.\n");
			}
			lastprime = i;
                 }
          }

	range = i-1;
        percentprime = ((float) numprimes/range)*100;
	percenttwin =  ((float) twingoal/range)*100;
	ratio = (float) twingoal/numprimes;

	printf("\n\nIn order to find %d twinprimes, we had to consider all the integers up to %d. In that range we found %d primes.\n", twingoal, range, numprimes);
printf("In that range, the ratio of the number of twinprimes to primes is %.3f\n", ratio);
printf("and the percentage of primes is %.3f%%, and the percentage of twinprimes is %.3f%%.\n", percentprime, percenttwin);
}
