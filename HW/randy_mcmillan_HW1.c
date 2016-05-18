/*

  Randy McMillan

  U8173-5382

  Homework 1

  COP 3514

*/

#include <stdio.h>

int main() {
    char a, slash, b;
    char a2, slash2, b2;
    printf("Enter a fraction (a/b): \n");
    scanf( "%c%c%c", &a,&slash,&b);
    printf("Enter a second fraction (a/b): \n");
    scanf( "%c%c%c", &a2,&slash2,&b2);

    printf("first fraction  is %c/%c\n",a,b );



/*
    printf("The sum of %d and %d is %d \n", a, b, a + b);
    printf("The product of %d and %d is %d \n", a, b, a * b);
    printf("The difference of %d and %d is %d \n", a, b, a - b);
    printf("The quotient of %d and %d is %d \n", a, b, a / b);
    printf("The remainder of %d and %d is %d \n", a, b, a % b);
*/
    return 0;
}
