#include<stdio.h>
main()
{
int number;

do {
   printf ("Input an integer in the range 3 through 45\n");
   scanf("%d", &number);
} while  (( number < 3) || (number > 45));

printf("Thanks for inputing the number %d \n", number);
}
