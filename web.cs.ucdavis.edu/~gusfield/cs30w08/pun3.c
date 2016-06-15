#include <stdio.h>

main()
{
int height, length, width, volume;

	printf("To C, or not to C: that is the pun. \n");

/* Now we read in the integer values of the variables */ 

   	printf(" Type in the integer values of height, length, and width, separated by a space: "); 

        scanf("%d %d %d", &height, &length, &width);
	volume = height * length * width;
        printf("Volume = %d\n", volume);
}

