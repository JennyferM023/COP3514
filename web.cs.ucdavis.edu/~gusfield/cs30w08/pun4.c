#include <stdio.h>

main()
{
float height, length, width, volume;

	printf("To C, or not to C: that is the pun. \n");

/* Now we read in the floating (real number) values of the variables. Use diff to 
find the places where this program differs from pun3.c */ 

   	printf(" Type in the floating values of height, length, and width, separated by a space: "); 

        scanf("%f %f %f", &height, &length, &width);
	volume = height * length * width;
        printf("Volume = %f\n", volume);
}

