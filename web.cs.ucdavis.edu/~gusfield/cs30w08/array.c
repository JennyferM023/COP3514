#include<stdio.h>
main()
{
int array1 [20], array2[5] = {4, 6, 3, 2, 6}, array3[] = {23, 41, 8}, array4[100];
int i, j, input, n1 = 0, n2 = 5, n3 = 3, min = 1000000, max = 0;

        printf("Enter a non-negative integer or an EOF to end\n");
	while (scanf ("%d", &input) != EOF) {
   	 	array1[n1] = input; 
                n1++;
                printf("Enter a non-negative integer or an EOF to end\n");
	}
        printf("The value of variable n1  at this point is %d \n\n", n1);
        /* n1 at this point holds the actual number of values that are in array1 */

        n1--;  /*  we do this because array indices in C start at 0 - ugh!! n1 now is the largest index used in  array1*/

        for ( i = 0; i <= n1; i++) {
		printf("The value of array1 entry %d is %d\n", i, array1[i]);
                if (min > array1[i]) {
                 	min = array1[i];
                }            

                if (max < array1[i]) {
                 	max = array1[i];
                }            
         }
 	printf("The max and the min values in array1 are %d, %d\n\n", max, min);

        for ( i = 4; i >= 0; i--) {     
		printf("The value of array2 entry %d is %d\n", i, array2[i]);
                }            
        printf("\n");

        for (i = n1, j = 0; i >= 0; i--, j++) {   /* This puts entries in array4 in reverse order of array1 */
  		array4[j] = array1[i];
        }

        printf("\n");

        for ( i = 0; i <= n1; i++) {
		printf("The value of array4 entry %d is %d\n", i, array4[i]);
	} 		
}


