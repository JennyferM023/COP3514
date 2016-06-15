#include<stdio.h>
#include<stdlib.h>

main()
{
char sarray[10] = "johnson";
printf("%s\n", sarray);

printf("Now input a name not more than 10 letters long\n");
scanf("%s", sarray);  /* Be sure you understand why this doesn't have an & in front of string? */

printf("%s\n", sarray); /* To print a string using %s, you give the address of the first character in the
                           string */
}
