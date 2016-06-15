#include <stdio.h>
#include<stdlib.h>
#define MAX 100

/* A binary search program that works on an ordered list of numbers in an array */

main()
{

int low, high, mid, i, m;
float b[MAX], target;

printf("How many numbers will be in your list (1 through 100 possible)?\n");
scanf("%d", &m);

printf("Input an ordered list of %d distinct numbers (can be floating point, and can be negative)\n", m);

        for (i = 0; i < m; i++) {
           scanf("%f", &b[i]);
        }
        printf("The list of numbers that was input is:\n"); 
        for (i = 0; i < m; i++) {
           printf("%8.3f", b[i]);
        }

 for (;;) {

        printf("\n Input a target number (can be floating point, and can be negative), which need not be one of the %d numbers you just entered\n",m);
        scanf("%f", &target);
        printf("The target you input is %8.3f\n", target);

          low = 0;
          high = m-1;
 
          if (m > 2) {
          while (low < high-1) {  /* I subtract the 1 because of the round down when dividing by 2; low will not
                                   always become equal to high.  */
		
	 	mid = low + (high - low)/2;
                printf ( "low, mid and high are %d, %d, %d \n", low, mid, high);
 
                if (b[mid] < target) {
			low = mid;
		}
		else {
			high = mid;
                }
           }

           printf ("At the end of the search, low, mid and high are: %d, %d, %d\n", low, mid, high);
         }
           if (target < b[low]) printf ("The target number %8.3f is not in the input, and is smaller than the smallest number %8.3f in the list\n", target, b[low]);

           else if (target >  b[high]) printf ("The target number %8.3f is not in the input, and is larger than the largest number %8.3f in the list\n", target, b[high]);
  
           else if (b[low] == target ) {
       		printf ("The target number %8.3f has been found at (human) position %d\n", b[low], low+1);
           }
	   else {
           if (b[high] == target ) {
       		printf ("The target number %8.3f has been found at (human) position %d\n", b[high], high+1);
           }
          else printf ("The target number %8.3f is not in the list, but its value is bracketed by %8.3f and %8.3f at \
(human) positions %d, %d\n", target, b[low], b[high], low+1, high+1);
          }
  getchar();
  printf("Type Y if you want to input another target number, and type anything else if you want to end\n");
  if (getchar() != 'Y') break;
 }
printf("Bye\n");
}
