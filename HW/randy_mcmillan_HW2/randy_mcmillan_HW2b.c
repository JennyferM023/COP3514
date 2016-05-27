/*
 *   Randy McMillan
 *   U8173-5382
 *   Homework 2 Magic Squares Excercise
 *   COP 3514
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* preprocessor directive */
/* Declare some variables, CONSTANTS , etc */
void  myMain();
int   main()
{
  myMain();
  return 0;
}   /* main */
int i, j, k;

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
  //initPosX = 0;/* array starts with 0 */
  //initPosY = (side / 2);
   printf(  "initPosX = %d (+), initPosY = %d (+)\n",  initPosX,  initPosY);
  posX = initPosX;
  posY = initPosY;
   printf(  "posX = %d, posY = %d\n",                  posX,      posY);
   printf(  "intValue = %d\n",                         intValue );

//set square 1 center x,  0 y
  array[posX][posY] = intValue;
   printf( "array[%2d ][%2d ] = %d\n", posX, posY, array[posX][posY]);

//start with 2
  for (intValue = 2; intValue < side * side + 1; intValue ++)
      {
      posX ++;
      posY --;

      //boundary conditions
      if ( posX > side - 1 ) { posX = 0; }

      if ( posY < 0 ) { posY = side - 1; }

      /* if NOT as in zero */
      if (!array[posX][posY]) {
         array[posX][posY] = intValue;
         }
      else
          {
          //posX ++;//left
          //posX --;//above
          posY ++;//under
          posY ++;//under
          //posY --;//oob
          array[posX][posY] = intValue;
          }

      //printf(  "posX=%d, posY=%d\n",  posX,  posY);
      //printf(  "intValue        = %2d \n",  intValue );
      printf( "array[%2d ][%2d ] = %d\n", posX, posY, array[posX][posY]);

      /* populate square */



      }

//  int i, j;

  for(j = 0; j < (side); j ++)
      {
      for(i = 0; i < (side); i ++)
          {
          //sleep(1);   // sleep for 1 seconds
          printf(" %2d ", array[i][j]);
          //sleep(1); // sleep for 1 seconds

          }

      printf("\n");
      }


}   /* myMain */
/* One for printing the magic square (for your printf, use 5 minimum field width). Finally, one for getting and returning the sum of the numbers in the magic square array. */
