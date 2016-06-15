#include<stdio.h>

void decompose (float x, int*  intpart, float* fracpart);
main()
{
int i;
float f, f1; 

printf("Input a floating point number:  ");
	scanf("%f", &f);
	decompose(f, &i, &f1);

	printf("The integer part of %f is %d, and the fractional part is %f1\n", f, i, f1);
}

/************************/

void decompose (float x, int*  intpart, float* fracpart)
{

*intpart = (int) x;
*fracpart = x - *intpart;
return;
}
