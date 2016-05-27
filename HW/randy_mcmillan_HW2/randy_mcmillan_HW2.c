/*
 *   Randy McMillan
 *   U8173-5382
 *   Homework 2 Magic Squares Excercise
 *   COP 3514
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* preprocessor directive */
/* Declare some variables, CONSTANTS , etc */
void  myMain();
int   main()
{
  myMain();
  return 0;
}   /* main */
void myMain()
{

int side, initPosX, initPosY, posX, posY, intValue, array[11][11];
  /* I want you to use functions for this project. I would like you to separately declare and define 3 separate functions. One for creating the magic square and putting it in the two dimensional array. */
  memset( array, 0, sizeof(array) );
  intValue = 1;

  printf("Enter side length of magic square: " );
  scanf("%d", &side );
  initPosX = (side / 2);/* array starts with 0 */
  initPosY = 0;
   printf(  "initPosX = %d, initPosY = %d\n",  initPosX,  initPosY);
  posX = initPosX;
  posY = initPosY;
   printf(  "posX = %d, posY = %d\n",          posX,      posY);
   printf(  "intValue = %d\n",                 intValue );
  array[posX][posY] = intValue;
   printf(  "array[%d][%d] = %d\n",            posX,      posY, array[posX][posY]);
  posX ++;
  posY --;

  /* populate square */
  if (posX >= side || posY <= -1 ) {
     printf("boundary condition posX = %d posY = %d\n", posX, posY );

     if (posY == -1) {

        posY = side - 1;/*adjusts for array index */
        intValue ++;
        array[posX][posY] = intValue;
        printf( "array[%d][%d] = %d\n", posX, posY, array[posX][posY]);

        }

     if (posX == side) {

        posX = 0;/* move to first column */
        intValue ++;
        array[posX][posY] = intValue;
        printf( "array[%d][%d] = %d\n", posX, posY, array[posX][posY]);
        }

     }
  else
      {

      printf("non boundary condition posX = %d posY = %d\n", posX, posY );

      }


}   /* myMain */
/* One for printing the magic square (for your printf, use 5 minimum field width). Finally, one for getting and returning the sum of the numbers in the magic square array. */
