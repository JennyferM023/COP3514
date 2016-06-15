#include <stdio.h>

main()
{
int height, length, width, volume;

	printf("To C, or not to C: that is the pun. \n");

/* Now we read in the integer value of the variable height instead of assigning it 
in the program. */

        scanf("%d", &height);
	length = 10;
	width = 12;
	volume = height * length * width;
        printf("Volume = %d\n", volume);
}

