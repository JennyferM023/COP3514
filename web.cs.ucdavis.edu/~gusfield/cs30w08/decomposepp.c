/* Program decompose.c redone using pointers in the main */
#include<stdio.h>

void decompose (float x, int*  intpart, float* fracpart);
void pointerpass( int * intpart);

main()
{
int i;
int * pti;
float f, f1; 
float *ptf1;

pti = &i;
ptf1 = &f1;
printf("Input a floating point number:  ");
	scanf("%f", &f);
	decompose(f, pti, ptf1);

	printf("The integer part of %f is %d, and the fractional part is %f1\n", f, *pti, *ptf1);

        pointerpass (pti);
	printf("The value of pti is %p and it points to value %d\n", pti, *pti);
}

/************************/

void decompose (float x, int*  intpart, float* fracpart)
{

*intpart = (int) x;
*fracpart = x - *intpart;
return;
}

/**********************/
void pointerpass( int * ipt)
{
int j = 7, * pj;
printf("\n ipt and *ipt inside function pointerpass %p, %d\n",ipt, *ipt);

*ipt = *ipt + 1;
printf("ipt and *ipt after increment in function pointerpass are %p  %d\n",ipt, *ipt);

ipt = &j;
printf("finally ipt and *ipt and j in function pointerpass are %p  %d  %d\n",ipt, *ipt, j);

return;
}

