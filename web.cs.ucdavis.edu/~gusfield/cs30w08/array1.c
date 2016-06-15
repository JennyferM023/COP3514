#include<stdio.h>
main()
{
int array1[20], n1 = 0, i, input;

        printf("Enter a non-negative integer or an EOF to end\n");
	while (scanf ("%d", &input) != EOF) {
                array1[n1] = input;

                for (i = 0; i < n1; i++) { /*what happens if the < is changed to <= ? */
			if (array1[i] == array1[n1]) {
			printf("The new input %d has been seen before in position %d\n", array1[n1],  i); /* Is this right? */
               		 }
                }
                n1++;
                printf("Enter a non-negative integer or an EOF to end\n");
	}
}
