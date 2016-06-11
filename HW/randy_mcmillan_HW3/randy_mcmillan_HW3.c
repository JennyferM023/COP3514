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
 * important.
 *
 * When printing the roots, there are three cases. You will have two
 * roots and will print two roots. You will have one root and will print that
 * one. Or you will have no real roots (probably resulting in some weird data in
 * your variables) and will just print "No real roots".
 *
 * You will be using pointers to pass around to functions to hold values that
 * are calculated.
 * Print all floats to 2 decimal places. Scan all of your coefficients on one
 * line separated by spaces.
 *
 */

#include <stdio.h>
#include <math.h>

int fakeBoolConCaveUp;
float
    globalA,
    globalB,
    globalC,
    *globalPntrA,
    *globalPntrB,
    *globalPntrC,
    globalX,
    globalY,
    globalP;

int quadraticFormula(
  float  *localPntrA,
  float  *localPntrB,
  float  *localPntrC
  );
void quadraticVertex(
  float  *localPntrA,
  float  *localPntrB,
  float  *localPntrC
  );
void quadraticInfo(
  float  *localPntrA,
  float  *localPntrB,
  float  *localPntrC
  );

int main(
  int         argc,
  const char  *argv[]
  )
{
float *localPntrA, *localPntrB, *localPntrC;

  /* pointers to globals */
  localPntrA = &globalA;
  localPntrB = &globalB;
  localPntrC = &globalC;

  printf("Enter coefficents a, b, and c: " );
  /* with pointers assigns values to the global variable */
  scanf("%f %f %f", localPntrA, localPntrB, localPntrC );

  /* assign global values */
  //globalA = * localPntrA;
  //globalB = * localPntrB;
  //globalC = * localPntrC;

   printf( "f(x) = %0.0fx^2 + %0.0fx + %0.0f\n", * localPntrA, * localPntrB, * localPntrC);
  /*printf(  "f(x) = %0.0fx^2 + %0.0fx + %0.0f\n",  * A,  * B,  * C);*/
  // printf(  "number of roots = %d\n",              quadraticFormula(a, b, c) );
  int numberOfRoots = quadraticFormula(localPntrA, localPntrB, localPntrC);
   printf("numberOfRoots = %d\n", numberOfRoots);
  quadraticVertex(localPntrA, localPntrB, localPntrC);
  quadraticInfo(localPntrA, localPntrB, localPntrC);
  return 0;
} /* main */
int quadraticFormula(
  float  *localA,
  float  *localB,
  float  *localC
  )  {

int    numberOfRoots = 0;
float  root1, root2, a, b, c;

  /* just juggling pointers to demonstrate proficiency */

  a = * localA;
  b = * localB;
  c = * localC;
  float  numerator;
  float  sqRootArg;

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

  numerator = (-2 * c);
  sqRootArg = b * b - 4 * a * c;

  if (sqRootArg < 0) {
     /* imaginary number case */
     root1 = numerator / ( b + sqrt(sqRootArg) );
     root2 = numerator / ( b - sqrt(sqRootArg) );

     if ( isnan(root1) || isnan(root2) ) {

        printf("No real roots\n");

        }

     }
  else
  if (sqRootArg == 0)
          {

          /* root1 equals root2 in this case */
          root1 = numerator / ( b + sqrt(sqRootArg) );
          root2 = numerator / ( b - sqrt(sqRootArg) );
          printf( "Root: %0.2f \n", root1);
          numberOfRoots ++;

          }
  else
      {

      root1 = numerator / ( b + sqrt(sqRootArg) );
      root2 = numerator / ( b - sqrt(sqRootArg) );
      printf( "Roots: %0.2f and %0.2f\n", root1, root2);
      numberOfRoots ++;
      numberOfRoots ++;

      }

  return numberOfRoots;
} /* quadraticFormula */
void quadraticVertex(
  float  *localA,
  float  *localB,
  float  *localC
  )  {


int a, b, c;
  a = * localA;
  b = * localB;
  c = * localC;
  /*
   * The second function is used to find the vertex of the expression. There is
   * no return value for this function. Remember, there is an x and a y
   * component to vertex.
   */

  if (localA != 0) {

     // x = ( -1 * b / (2 * a) );
     // y = a * x * x + b * x + c;
     // printf("Vertex: (%0.2f, %0.2f)\n", x, y );

     }
  else{ /*linear case */ }
} /* quadraticVertex */
void quadraticInfo(
  float  *localA,
  float  *localB,
  float  *localC
  ) {
  /*
   * The third function function is to find the directrix and the direction the
   * graph of the function is facing. There is no return value for this
   * function. The direction of the graph will be represented by a char that
   * will either be 'U' for up or 'D' for down.
   */
//  int a, b, c;
//  a = * localA;
//  b = * localB;
//  c = * localC;

//find directorix
//y = a - (1 + b * b) / (4 * a);
//printf("Directrix: y = %0.2f\n", y);

  /* concavity */
  if (localA > 0) {

     fakeBoolConCaveUp = 1;

     }
  else
  if (localA < 0)
          {

          fakeBoolConCaveUp = 0;

          }

  else { /* linear case */ }

  if(fakeBoolConCaveUp) {

     printf("The graph is facing up\n");

     }
  else
  if (fakeBoolConCaveUp)
          {

          printf("The graph is facing down\n");


          }

} /* quadraticInfo */
/*
 * Sample Output:
 * Enter coefficents a, b, conand c: 3 18 -48
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
