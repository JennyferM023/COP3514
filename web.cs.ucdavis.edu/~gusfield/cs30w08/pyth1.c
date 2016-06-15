#include<stdio.h>

/* This program determines all combinations of three integers in user
specified ranges, which make up the sides of a right triangle, using
the Pythagorian Theorem. If you don't remember the Pythagorian Theorem, look it
up in a high-school math book. This will print each combination only once. */

main()
{
int s1,s2,s3,t1,t2,t3;  /* Note, no pyth variable */

printf("input three positive integers t1, t2, t3 please, where t1 <= t2 <= t3 \n");

scanf("%d%d%d", &t1, &t2, &t3);
 for (s1 = 1; s1 <= t1; ++s1)
  for (s2 = s1 ; s2 <= t2; ++s2)
   for (s3 = s2; s3 <= t3; ++s3) {

printf ("%d %d %d\n", s1, s2, s3);

if ((s3*s3) == (s1*s1 + s2*s2))

 printf("The sides %d,%d,%d do make up the sides of a right triangle \n", 
s1,s2,s3); 

   }

}
