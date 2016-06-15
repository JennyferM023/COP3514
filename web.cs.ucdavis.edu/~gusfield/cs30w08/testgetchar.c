#include<stdio.h>
main()

{
int c; /* note c is declared int, but it could be declared char */

printf ("Enter a string and end by pushing the Return key\n");

while ((c = getchar() ) != '\n') {

/* An alternate way to write the while is
  do {
   ch = getchar ();
  } while (ch != '\n');
*/

putchar(c);

	switch (c) {

		case 'a': 
		printf("  here we have an a\n");
		break;

		case 'c':
		printf("  Yes it is c\n");
		break;

		default: 
		printf("  Neither a nor c \n");
		break;

	}
	if (c == 'N') printf("The entered character was N\n");
}
}
