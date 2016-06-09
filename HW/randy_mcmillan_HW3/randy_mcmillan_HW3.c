/*
 *
 * Randy McMillan
 *
 * U8173-5382
 *
 * Homework 3
 *
 * COP 3514
 *
 * All of your printing and scanning should be done in main. You are scanning in
 * integers, but you should be holding values in floats because precision is
 * important. When printing the roots, there are three cases. You will have two
 * roots and will print two roots. You will have one root and will print that
 * one. Or you will have no real roots (probably resulting in some weird data in
 * your variables) and will just print "No real roots". You will be using
 * pointers to pass around to functions to hold values that are calculated.
 * Print all floats to 2 decimal places. Scan all of your coefficients on one
 * line separated by spaces.
 *
 */
#include <stdio.h>
#include <math.h>

float  a, b, c;
int    x, y;
int    quadraticFormula(
  float  localA,
  float  localB,
  float  localC
  );
void quadraticVertex(), quadraticInfo();


int main(
  int         argc,
  const char  *argv[]
  )
{
float *A, *B, *C;

  A = &a;
  B = &b;
  C = &c;

  printf("Enter coefficents a, b, and c: " );
  scanf("%f %f %f", A, B, C );

  a = * A;
  b = * B;
  c = * C;

  //printf(  "a = %f b = %f c = %f\n",              a,    b,    c );
  //sprintf(  "*A = %f *B = %f *C = %f\n",           * A,  * B,  * C );
  /* printf(  "A = %f B = %f C = %f\n",     A,    B,    C ); */
   printf(  "f(x) = %0.0fx^2 + %0.0fx + %0.0f\n",  a,    b,    c);
   printf(  "f(x) = %0.0fx^2 + %0.0fx + %0.0f\n",  * A,  * B,  * C);

   printf(  "number of roots = %d\n",              quadraticFormula(a, b, c) );

  return 0;
} /* main */
int quadraticFormula(
  float  localA,
  float  localB,
  float  localC
  )  {
int    numberOfRoots;
float  root1, root2;


   printf("a = %0.2f b = %0.2f c = %0.2f\n", localA, localB, localC);
  /*
   * The first function will preform the quadratic equation to find the roots of
   * the expression. The return value of the function will be an int that
   * signifies how many REAL roots there are. You do not need to worry about
   * imaginary numbers.
   */

  /* Notes
   *
   *    alt form
   *    x = (-2c)/(b +/- sqrt(b^2 - 4ac))
   *    alt form avoids if a = 0 division by 0
   *
   *    popular form
   *    x = (-b +/- sqrt(b^2 - 4ac))/(2a)
   *
   */

  float  numerator = (-2 * localC);
  float  rootArg = localB * localB - 4 * localA * localC;

  root1 = numerator / ( b + sqrt(rootArg) );
  root2 = numerator / ( b - sqrt(rootArg) );
    printf(  "root1 = %0.2f\n",  root1);
    printf(  "root2 = %0.2f\n",  root2);

  if (rootArg < 0) {
     printf("complex number\n");
     }


  if (root1 != NAN)
    numberOfRoots ++;

  if (root2 != NAN)
    numberOfRoots ++;


  return numberOfRoots;
} /* quadraticFormula */
void quadraticVertex()  {
  /*
   * The second function is used to find the vertex of the expression. There is
   * no return value for this function. Remember, there is an x and a y
   * component to vertex.
   */
} /* quadraticVertex */
void quadraticInfo() {
  /*
   * The third function function is to find the directrix and the direction the
   * graph of the function is facing. There is no return value for this
   * function. The direction of the graph will be represented by a char that
   * will either be 'U' for up or 'D' for down.
   */
} /* quadraticInfo */
/*
 * Sample Output:
 * Enter coefficents a, b, and c: 3 18 -48
 * f(x) = 3x^2 + 18x + -48
 * Roots: 2.00 and -8.00
 * Vertex: (-3.00, -75.00)
 * Directrix: y = -75.08
 * The graph is facing up
 * Enter coefficents a, b, and c: 2 24 72
 * f(x) = 2x^2 + 24x + 72
 * Root: -6.00
 * Vertex: (-6.00, 0.00)
 * Directrix: y = -0.12
 * The graph is facing up
 * Enter coefficents a, b, and c: 1 4 5
 * f(x) = 1x^2 + 4x + 5
 * No real roots
 * Vertex: (-2.00, 1.00)
 * Directrix: y = 0.75
 * Enter coefficents a, b, and c: -1 4 5
 * f(x) = -1x^2 + 4x + 5
 * Roots: -1.00
 */
