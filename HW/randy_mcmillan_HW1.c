/*

  Randy McMillan

  U8173-5382

  Homework 1

  COP 3514

*/

#include <stdio.h>

/*Declare some variables */
    int a;
    char slash;
    int b;
    int c;
    char slash2;
    int d;

    int report();
    int errorCheck();
int main() {
    /* Prompt user to input variable*/
    printf("Enter a fraction (a/b): \n");
    /* Receieve the user input*/
    scanf( "%d%c%d", &a,&slash,&b);
    /* Prompt user to input variable*/
    printf("Enter a fraction (c/d): \n");
    /* Receieve the user input*/
    scanf( "%d%c%d", &c,&slash2,&d);

    report();

    return 0;
}

int errorCheck()
{

return 0;
}
int report()
{


    printf("first fraction  is %d/%d\n" ,a,b );
    printf("second fraction  is %d/%d\n",c,d );



/*
    printf("The sum of %d and %d is %d \n", a, b, a + b);
    printf("The product of %d and %d is %d \n", a, b, a * b);
    printf("The difference of %d and %d is %d \n", a, b, a - b);
    printf("The quotient of %d and %d is %d \n", a, b, a / b);
    printf("The remainder of %d and %d is %d \n", a, b, a % b);
*/

return 0;
}
