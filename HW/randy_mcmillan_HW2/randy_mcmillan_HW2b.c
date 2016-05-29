/*
 *
 * Randy McMillan
 *
 * U8173-5382
 *
 * Homework 2
 *
 * COP 3514
 *
 */

#include <stdio.h>
#define MAX_SIDELENGTH 11
/* Store the magic square in a two dimensional array. */
int magicArray[MAX_SIDELENGTH][MAX_SIDELENGTH];
/*  I would like you to separately declare and define 3 separate functions. */
void  outputMagicSquare(int array[MAX_SIDELENGTH][MAX_SIDELENGTH]);
int   sumOfTheBox(int array[MAX_SIDELENGTH][MAX_SIDELENGTH]);
int   globalSum;
int   iHat, jHat, sideSquared;
int   globalSideLength;
int   yPos, xPos;

int main(
  int         argc,
  const char  *argv[]
  ) {
  /* Think monolithic... */

  printf("\n\nEnter size of magic square: ");
  scanf("%d", &globalSideLength);
  printf(" \n");

  if(globalSideLength % 2 == 0 || globalSideLength > MAX_SIDELENGTH) {

     printf("Invalid Input: %d\n", globalSideLength );
     return 0;/* stops program if the side length is even or side > max */

     }

  /* Start by placing the number 1 in the middle of row 0. */
  yPos = 0;
  xPos = globalSideLength / 2;
  sideSquared = globalSideLength * globalSideLength; /* interations */

/* Place each of the remaining numbers 2, 3, ... , n2 by moving up one row and over one column. */
  for (iHat = 1; iHat <= sideSquared; iHat ++)
      {

      magicArray[xPos][yPos] = iHat;/* set first value 1 in req. location */

      /* Any attempt to go outside the bounds of the array
       * should "wrap around" to the opposite side of the array.
       */
      if(iHat % globalSideLength == 0)
      /* after globalSideLength iterations increment yPos */
         {

         yPos ++;

         }
      else
          {

          if (yPos == 0) {
             /* top boundary condition */
             /* move to bottom */
             yPos = globalSideLength - 1;

             }
          else
              {

              /* else keep moving "up" */
              yPos --;

              }

          if( xPos == (globalSideLength - 1) )
             {
             /* "right" boundary condition */
             /* shift back to first column */
             xPos = 0;

             }
          else
              {
              /* else keep moving "right" */
              xPos ++;

              }

          }

      }

  outputMagicSquare(magicArray);
  printf( "Sum of Magic Numbers: %d\n", sumOfTheBox(magicArray) ); /* return type int from sumOfBox function */
  return 0;
} /* main */
void outputMagicSquare(int array[MAX_SIDELENGTH][MAX_SIDELENGTH]) {

  for(jHat = 0; jHat < (globalSideLength); jHat ++)
      {

      for(iHat = 0; iHat < (globalSideLength); iHat ++)
          {
          /* starts at (0,0) */
          /* prints across traversing thru iHats then increments jHats */
          printf(" %3d ", array[iHat][jHat]);

          }

      printf(" \n\n");/* tried to get perfect square */

      }

} /* printMagicSquare */
/*
 * For the sum of all the numbers in the magic square array, I want you to use
 * while loops. You can use either for loops or while loops for the print and
 * create magic number functions.
 * HINT: The only function that needs to return something is the sum magic
 * square function (integer). The other two function don't need to return
 * anything.
 */
int sumOfTheBox(int array[MAX_SIDELENGTH][MAX_SIDELENGTH]){

int  sum;
int  iHat;
int  jHat;

  iHat = 0;
  sum  = 0;

/* while loop */
  while (iHat < globalSideLength) {

        jHat = 0;

        while (jHat < globalSideLength) {
              sum = sum + magicArray[iHat][jHat];
              jHat ++; /* increment */
              }

        iHat ++; /* increment */

        }

  return globalSum = sum;/* returns an integer "sum" */
} /* sumOfTheBox */
