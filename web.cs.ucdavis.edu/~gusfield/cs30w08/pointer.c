#include<stdio.h>
main()
{

int i, j, *p, *q;

p = &i;
i = 33;
printf("Printing i gives %d, and printing *p gives %d, and printing p gives %d and printing &i gives %d\n", i, *p, p, &i);

*p = 2;
printf("Now Printing i gives %d, and printing *p gives %d, and printing p gives %d\n", i, *p, p);

q = &j; /* Take this out and see what happens. Why does it happen? */
*q = *p;

printf("Printing *p gives %d and printing *q gives %d\n", *p, *q ); 
printf("But Printing p gives %d and printing q gives %d\n", p, q );

q = p;
printf("Now Printing p gives %d and printing q gives %d\n", p, q ); 

i = 44;
printf("Printing *p gives %d, and printing *q gives %d, and printing i gives %d\n", *p, *q, i); 

}
