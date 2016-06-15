#include<stdio.h>
/* This program determines all combinations of three integers in user
specified ranges, which make up the sides of a right triangle, using
the Pythagorian Theorem. If you don't remember the Pythagorian Theorem, look it
up in a high-school math book. */

main()
{
int s1,s2,s3,t1,t2,t3,pyth;

printf("input three positive integers please\n");
scanf("%d%d%d", &t1, &t2, &t3);

 for (s1 = 1; s1 <= t1; s1++) {
  for (s2 = 1; s2 <= t2; s2++){
   for (s3 = 1; s3 <= t3; s3++) {

pyth = 0;

printf("%d, %d, %d\n", s1, s2, s3);

if ((s1 >= s2) && (s1 >= s3) && ((s1*s1) == (s2*s2 + s3*s3)))
pyth = 1;

else
if ((s2 >= s1) && (s2 >= s3) && ((s2*s2) == (s1*s1 + s3*s3)))
pyth = 1;

else
if ((s3 >= s1) && (s3 >= s2) && ((s3*s3) == (s1*s1 + s2*s2)))
pyth = 1;

if (pyth == 1) printf("The sides %d,%d,%d do make up the sides of a right triangle \n", 
s1,s2,s3); 

   }
  }
 }

}
