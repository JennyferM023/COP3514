/*
 * main.c
 * complex.h
 *
 * Created by randymcmillan on 6/11/16.
 * Copyright © 2016 RandyMcMillan.net. All rights reserved.
 */

/*
 *
 *
 * List deliverables
 * Resources
 * Power Point
 * List of individual contributions
 *
 *
 *
 */

#include <stdio.h>
#include <math.h>
#include <complex.h>

void cargDemo (
  double complex);
void ccoszDemo (
  double  a,
  double  b
  );

int main(
  int         argc,
  const char  *argv[]
  ) {

int             a, b;
double complex  z = -4.4 + 3.3 * I;
  cargDemo(z);
  ccoszDemo(a, b);

  return 0;
} /* main */
void cargDemo(
  double complex z){

double  x = creal(z);
double  y = cimag(z);

double  radius = cabs(z);
double  argument = carg(z);

   printf(  "cartesian(x, y): (%4.1f, %4.1f)\n",  x,       y);
   printf(  "polar(r, theta): (%4.1f, %4.1f)\n",  radius,  argument);


} /* cargDemo */
void ccoszDemo(
  double  a,
  double  b
  ){


double ccosz = ( exp (a * b) + exp (-a * b) ) / 2;
  printf("ccosz = %f\n", ccosz);



} /* ccoszDemo */
//ccos(z) = (exp(i * z) + exp(-i * z)) / 2

//casinh(z) = clog(z + csqrt(z * z + 1))

//double complex casinh(double complex x);



/*
 * Cpow
 *
 * int x, y, p, q;
 * double complex z1, z2, z3; //complex variables declaration
 * scanf("%d %d %d %d", &x, &y, &p, &q);
 * z1 = (p + q * I);
 * z2 = (x + y * I);
 * z3 = cpow (z2, z1);
 * printf("%f + %f * i\n", creal(z3), cimag(z3));
 *
 *
 *
 */
