#include<stdio.h>
long expt (int, int);
int pyth(int, int, int);
int examine (int, int, int);
int pyth(int s1, int s2, int s3);

main()
{
int i1, i2, i3, i4, presult, eresult, result;

printf ("Input three integers:\n");
scanf("%d%d%d", &i1, &i2, &i3);

presult = pyth (i1, i2, i3);
printf("the result returned from function pyth is %d\n", presult);

eresult = examine(i1, i2, i3);
printf("the result returned from function examine is %d\n", eresult);
result = presult + eresult;
printf ("The sum of the two returned results is %d\n", result);

}

/*****************/
int examine(int i, int j, int k)
{
long resul;
resul = expt(i, j);
printf("%d raised to the power %d is %ld\n",i,j, resul);
  if (k == resul) {
		return 1;
  }
resul = expt(j, i);
printf("%d raised to the power %d is %ld\n",j,i, resul);
  if (k == resul) {
		return 2;
  }
return 0;
}

/***********************/
long expt ( int a, int b)
{
int i;
long result;

if (b == 0 ) return 1;

result = 1;

  for (i = 1; i <= b; i++) {
  result = result * a;
}
  return result;
}


/*********************/
int pyth(int s1, int s2, int s3)
{

if ((s1 >= s2) && (s1 >= s3) && ((s1*s1) == (s2*s2 + s3*s3)))
return 1;

if ((s2 >= s1) && (s2 >= s3) && ((s2*s2) == (s1*s1 + s3*s3)))
return 1;

if ((s3 >= s1) && (s3 >= s2) && ((s3*s3) == (s1*s1 + s2*s2)))
return 1;

return 0;
}

