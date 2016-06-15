/* Look Ma, no square brackets (except in the array declaration) */
#include<stdio.h>
#define N 10
void summ (int *);

main()
{
int a[N], i;

for (i = 0; i < N; i++) {
   *(a+i)  = i;
}

summ(a);
}

/*****************/

void summ(int * p)
{
int * startp = p, sum = 0;

 while (p < startp + 10) sum += *p++;

printf ("the sum is %d\n", sum);
} 
