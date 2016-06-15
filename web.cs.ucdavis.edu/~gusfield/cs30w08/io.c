#include <stdio.h>

main()
{
int i;
float x;

i = 40;
x = 839.21;

/* Some Conversion Specifications */

printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
printf("|%10.3f|%10.3e|%-10g|\n", x,x,x);

printf("\n\n");

/* Some Escape Sequences */

printf("Item\tUnit\tPurchase\n\tPrice\tDate\a\a\a\n");

printf("\n\n");

/* Printing % and " */

printf("\"Hello!%%\"\n");
printf("Two backslashes \\");
return 0;

}
