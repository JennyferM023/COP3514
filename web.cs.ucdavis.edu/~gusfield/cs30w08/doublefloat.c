#include <stdio.h>

main()
{
   double num;   /* here we use a double instead of a float */ 

   printf("enter number: ");
   scanf("%lf", &num);   /* here we need to use lf instead of f in the conversion character */

   printf("%lf \n", num);

   return 0;
}


