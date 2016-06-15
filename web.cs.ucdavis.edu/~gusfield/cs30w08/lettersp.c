/* Example of pointer arithmetic accessing a character array. Incrementing a pointer increments the address
that the pointer holds, by the needed number of bytes to access the next item in the array. The compiler
figures that all for you (normally). The actual number of bytes added
depends on the type of the variable the pointer points to, the system that the program is running on, and
the phase of the moon (based on my experience with C). This program takes in a five letter word
and reverses it.*/ 

#include<stdio.h>
main()
{
	char letters[5];
	char * ptr;
	int count;

	ptr = letters;
        printf("Input a five letter word\n");

	for ( count = 0; count < 5; count++){
		*ptr = getchar();
		++ptr;
	}

	for ( count = 0; count < 5; count++){
		--ptr;
		putchar( *ptr );
	}
        printf("\n");
}
