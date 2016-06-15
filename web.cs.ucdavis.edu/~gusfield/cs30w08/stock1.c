#include <stdio.h>

/* This example illustrates the problem mentioned about scanf, i.e., that when it is
matching input to %d or %f, it ends the scan when it sees input that can't be part of
the number it is reading. However, it does not consume that input. So when the shareprice input
is read, the newline character is left unconsumed. Then that newline character is the next
thing read in the next scanf. So stockcode2 gets assigned the newline character, which is
not what one would want.  */

main()
{

 int price, shares;
 float num, denom, value;
 char stockcode1, stockcode2;

printf("Enter a stock code (a character)\n"); /* This illustrates a successful read of a character. */
scanf("%c", &stockcode1);
printf("The code you entered was %c \n", stockcode1);

printf("Enter share price as an number with a fraction: ");

scanf("%d%f/%f", &price, &num, &denom); /* Students: Be sure you know why this read works correctly, and does not
                                       get ruined by the newline character from the prior read? */

printf("Enter a stock code (a character)\n");
scanf("%c", &stockcode2);
printf("The code you entered was %c \n", stockcode2);

printf("Enter the number of shares: ");
scanf("%d", &shares);

value = (price + num / denom) * shares;
printf("The value of the stock is $%.2f\n", value);

return 0;

}
