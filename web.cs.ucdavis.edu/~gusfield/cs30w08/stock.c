#include <stdio.h>

main()
{

 int price, shares;
 float num, denom, value;


printf("Enter share price as an number with a fraction: ");
scanf("%d%f/%f", &price, &num, &denom); /* Notice that the num and denom are floats */
printf("Enter the number of shares: ");
scanf("%d", &shares);

value = (price + num / denom) * shares;
printf("The value of the stock is $%.2f\n", value);

return 0;

}
