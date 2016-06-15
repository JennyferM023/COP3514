#include <stdio.h>
/* A binary search program. Test it out to see that it works. Note that the number
of times that the target is compared to mid is much fewer than the range high - low, so
this is much more efficient than direct comparison of target with every number in the initial
range high - low.  What happens if you
enter a number as target that is outside of the [low, high] range? */

main()
{

int low, high, target, mid;

do {
printf("Input the lower and upper limits:\n");

scanf ("%d \n %d", &low, &high);
printf(" low = %d and high = %d \n", low, high);

if (low > high) printf(" the first number must be smaller or equal to the second one \n");
} while (low > high);
 
        printf("input your target number between %d and %d inclusive\n", low, high);
        scanf("%d", &target);

          while (low < high-1) {  /* I subtract the 1 because of the round down when dividing by 2; low will not
                                   always become equal to high.  */
		
	 	mid = low + (high - low)/2;
                printf ( "low, mid and high are %d, %d, %d \n", low, mid, high);
 
                if (mid < target) {
			low = mid;
		}
		else {
			high = mid;
                }
           }
           printf ("At the end of the while, low, mid and high are: %d, %d, %d\n", low, mid, high);

           if (low == target ) {
       		printf ("The target number is %d\n", low);
           }
	   else {
        	printf ("The target number is %d\n", high);
           }
}
