#include <stdio.h>
main()
{
int num;
     printf ("Please enter an integer between 1 and 16 inclusive or enter the EOF character to end: \n");
     while ( scanf ("%d", &num) != EOF ) {

      if (num < 9) {
   	if (num > 3) {
		if (num > 5) {
			if (num > 7)  printf("The number %d must be 8\n", num);

                        else {
				if (num > 6) printf("The number %d must be 7\n",  num);
		    	        else printf("The number %d must be 6\n", num);
			}
                }
                else {
			if (num > 4)  printf("The number %d must be 5\n", num);
                        else printf("The number %d must be 4\n", num);
                }
        }
     	else {
		if (num > 2) printf("The number %d must be 3\n", num);
                else {
			if (num > 1) printf("The number %d must be 2\n", num);
                        else {
               			if (num < 1) printf ("The number %d is out of bounds.\n", num);
				else printf("The number %d must be 1\n", num);
                             }
                }
	}
       }
       else {

   	if (num > 11) {
		if (num > 13) {
			if (num > 15){  
                    		if (num > 16) printf("The number %d is out of bounds.\n", num);
                                else  printf("The number %d must be 16\n", num);
                                }

                        else {
				if (num > 14) printf("The number %d must be 15\n",  num);
		    	        else printf("The number %d must be 14\n", num);
			}
                }
                else {
			if (num > 12)  printf("The number %d must be 13\n", num);
                        else printf("The number %d must be 12\n", num);
                }
        }
     	else {
		if (num > 10) printf("The number %d must be 11\n", num);
                else {
			if (num > 9) printf("The number %d must be 10\n", num);
                        else  printf("The number %d must be 9\n", num);
                             
                }
	}
       }


     printf ("Please enter an integer between 1 and 16 inclusive or enter the EOF character to end: \n");
     }
}
