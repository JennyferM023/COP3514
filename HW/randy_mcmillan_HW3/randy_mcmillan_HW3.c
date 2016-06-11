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
 */

#include <stdio.h>
#include <math.h>

float
    globalA,
    globalB,
    globalC;

int quadraticFormula (
  float  *localPntrA,
  float  *localPntrB,
  float  *localPntrC
  );

void quadraticVertex (
  float  *localPntrA,
  float  *localPntrB,
  float  *localPntrC
  );

void quadraticInfo (
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

  /* local pointers to globals, */
  localPntrA = &globalA;
  localPntrB = &globalB;
  localPntrC = &globalC;

  printf("Enter coefficents a, b, and c: " );
  scanf("%f %f %f", localPntrA, localPntrB, localPntrC );
  printf( "f(x) = %0.0fx^2 + %0.0fx + %0.0f\n", *localPntrA, *localPntrB, *localPntrC);
  /* printf(  "Number Of Roots = %d\n", quadraticFormula(localPntrA, localPntrB, localPntrC) ); */
  quadraticFormula(localPntrA, localPntrB, localPntrC);
  quadraticVertex(localPntrA, localPntrB, localPntrC);
  quadraticInfo(localPntrA, localPntrB, localPntrC);
  return 0;
} /* main */
int quadraticFormula(
  float  *pntrA,
  float  *pntrB,
  float  *pntrC
  )  {

int    numberOfRoots = 0;
float  root1, root2, localA, localB, localC;
float  numerator;
float  sqRootArg;
  localA = *pntrA;
  localB = *pntrB;
  localC = *pntrC;
  numerator = (-2 * localC);
  sqRootArg = (localB * localB) - 4 * localA * localC;

  /*
   * The first function will preform the quadratic equation to find the roots of
   * the expression. The return value of the function will be an int that
   * signifies how many REAL roots there are. You do not need to worry about
   * imaginary numbers.
   */

  /* Notes
   *    alt Quadratic form
   *    x = (-2c)/(b +/- sqrt(b^2 - 4ac))
   *    alt form avoids if a = 0 division by 0
   */


  if (sqRootArg < 0) {
     /* imaginary number case */
     root1 = numerator / ( localB + sqrt(sqRootArg) );
     root2 = numerator / ( localB - sqrt(sqRootArg) );

     if ( isnan(root1) || isnan(root2) ) {

        printf("No real roots\n");

        }

     }
  else
  if (sqRootArg == 0)
          {

          /* root1 equals root2 in this case */
          root1 = numerator / ( localB + sqrt(sqRootArg) );
          root2 = numerator / ( localB - sqrt(sqRootArg) );
          printf( "Root: %0.2f \n", root1);
          numberOfRoots ++;

          }
  else
      {

      root1 = numerator / ( localB + sqrt(sqRootArg) );
      root2 = numerator / ( localB - sqrt(sqRootArg) );
      printf( "Roots: %0.2f and %0.2f\n", root1, root2);
      numberOfRoots ++;
      numberOfRoots ++;

      }

/* REF LINE: 54 Instructions not clear on what to do with return value; */
  return numberOfRoots;
} /* quadraticFormula */
void quadraticVertex(
  float  *pntrA,
  float  *pntrB,
  float  *pntrC
  )  {

float localA, localB, localC, localX, localY;

  localA = *pntrA;
  localB = *pntrB;
  localC = *pntrC;

  /*
   * The second function is used to find the vertex of the expression. There is
   * no return value for this function. Remember, there is an x and a y
   * component to vertex.
   */

  if (localA != 0) {

     localX = ( -1 * localB / (2 * localA) );
     localY = localA * localX * localX + localB * localX + localC;

     printf("Vertex: (%0.2f, %0.2f)\n", localX, localY );

     }
  else{ /*linear case */ }
} /* quadraticVertex */
void quadraticInfo(
  float  *pntrA,
  float  *pntrB,
  float  *pntrC
  ) {
  /*
   * The third function function is to find the directrix and the direction the
   * graph of the function is facing. There is no return value for this
   * function. The direction of the graph will be represented by a char that
   * will either be 'U' for up or 'D' for down.
   */
  float  localA, localB, localC, localY;
  char   concavity;

  localA = *pntrA;
  localB = *pntrB;
  localC = *pntrC;

/* find directorix */
/* y = c - (1+b^2)/(4 * a) */
  localY = localC - (1 + localB * localB) / ( 4 * localA );
  printf("Directrix: y = %0.2f\n", localY);

  /* concavity */
  if (*pntrA > 0)
     {

     concavity = 'U';

     }
  else
  if (*pntrA < 0)
          {

          concavity = 'D';

          }

  else { /* linear case */ }


  /*
   * The direction of the graph will be represented by a char that
   * will either be 'U' for up or 'D' for down.
   *
   * Not sure on these directions so I figured char comparison of ASCII value
   * might be a good demonstration.
   */
  if(concavity == 85)/* 85 is ASCII value for 'U' */
     {

     printf("The graph is facing up\n");

     }
  else
  if (concavity == 68)/* 68 is the ASCII value for 'D' */
          {

          printf("The graph is facing down\n");

          }

} /* quadraticInfo */
