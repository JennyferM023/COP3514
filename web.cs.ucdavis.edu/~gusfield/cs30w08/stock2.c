#include <stdio.h>

/* This program corrects the scanf problem we saw in program stock1.c. Do a diff on these
two programs to see the change, and then be sure you understand the correction. The explanation
is in the book in at least two places - one where it discusses conversion characters for numbers
and a second time where it discusses the conversion character %c - your task is to find the
explanation */

main()
{

 int price, shares;
 float num, denom, value;
 char stockcode1, stockcode2;

printf("Enter a stock code (a character)\n"); /* This illustrates a successful read of a character. */
scanf("%c", &stockcode1);
printf("The code you entered was %c \n", stockcode1);

printf("Enter share price as an number with a fraction: ");

scanf("%d%f/%f", &price, &num, &denom); 

printf("Enter a stock code (a character)\n");
scanf(" %c", &stockcode2);
printf("The code you entered was %c \n", stockcode2);

printf("Enter the number of shares: ");
scanf("%d", &shares);

value = (price + num / denom) * shares;
printf("The value of the stock is $%.2f\n", value);

return 0;

}
