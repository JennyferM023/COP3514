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
    memset( array, 0, sizeof(array) );

  /* I want you to use functions for this project. I would like you to separately declare and define 3 separate functions. One for creating the magic square and putting it in the two dimensional array. */
  memset( array, 0, sizeof(array) );
  intValue = 1;

  printf("Enter side length of magic square: " );
  scanf("%d", &side );
  initPosX = (side / 2);/* array starts with 0 */
  initPosY = 0;
  //initPosX = 0;/* array starts with 0 */
  //initPosY = (side / 2);
   printf(  "initPosX = %d, initPosY = %d \n",  initPosX,  initPosY);
  posX = initPosX;
  posY = initPosY;
   printf(  "posX = %d, posY = %d\n",                  posX,      posY);
   printf(  "intValue = %d\n\n\n",                         intValue );



//start with 1
  for (intValue = 1; intValue < side * side + 1; intValue ++)
      {

          printf( "array[%2d ][%2d ] = %d\n", posX, posY, array[posX][posY]);
          //printf( "!array[%2d ][%2d ] = %d\n", posX, posY, !array[posX][posY]);

      /* if 0 */
      if (!array[posX][posY]) {
      
          
          array[posX][posY]= intValue;
          printf( "array[%2d ][%2d ] = %d\n\n\n", posX, posY, array[posX][posY]);
          posX++,posY--;
      
      }
      else{
      
          printf("not 0");
          printf( "else array[%2d ][%2d ] = %d\n", posX, posY, array[posX][posY]);
      
      }

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
