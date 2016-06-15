/* This is binary search specialized to 8 numbers */
#include <stdio.h>
main()
{
int num;

	printf ("Please enter an integer between 1 and 8 inclusive: \n");
	scanf ("%d", &num);

   	if (num > 3) {
                printf("the number is greater than 3\n");
		if (num > 5) {
                        printf("the number is greater than 5\n");
			if (num > 7)  {
                           printf("the number is greater than 7\n");
                           printf("The number %d must be 8\n", num);
                        }
                        else {
                                printf("the number is less than 8\n");
				if (num > 6) {
                                    printf("The number is greater than 6\n");
                                    printf("The number %d must be 7\n",  num);
                                }
		    	        else {
                                   printf("the number is less than 7\n");
                                   printf("The number %d must be 6\n", num);
                                }
			}
                }
                else {
                        printf("the number is less than 6\n");
			if (num > 4)  {
                            printf("The number is greater than 4\n");
                            printf("The number %d must be 5\n", num);
                        }
                        else {
                           printf("the number is less than 5\n");
                           printf("The number %d must be 4\n", num);
                        }
                }
        }
     	else {
                printf("the number is less than 4\n");
		if (num > 2) {
                    printf("The number is greater than 2\n");
                    printf("The number %d must be 3\n", num);
                }
                else {
                        printf("the number is less than 3\n");
			if (num > 1) {
                            printf("The number is greater than 1\n");
                            printf("The number %d must be 2\n", num);
                        }
                        else {
                           printf("the number is less than 2\n");
                           printf("The number %d must be 1\n", num);
                        }
                }
	}
}
