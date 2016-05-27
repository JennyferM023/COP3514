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
#define MAX_SIZE 11 /* Generalizing for more dimensions */
int  globalSide;
int  globalArray[MAX_SIZE][MAX_SIZE]; /* prescribed MAX dimensions 11 x 11 */
int  globalInitPosX = MAX_SIZE / 2;/* just priming with max middle of columns */
int  globalInitPosY = MAX_SIZE - 1;/* just priming with max last row */
/* Declare some functions */
int   myMain();
void  inputSide();
int   checkMAXSize(int localSIZE);
void  populateArray();
int   magicLoop();
/*
 *  Entry Point
 */
int main()
{
  return myMain();
}   /* main */
/*
 *  myMain is where things really start
 */
int myMain()
{
  inputSide();
  checkMAXSize(globalSide);
  return 0;
}   /* myMain */
void inputSide()
{
  printf("Enter size of magic square: " );
  scanf("%d", &globalSide );
  globalInitPosX = (globalSide / 2) + 1;
  globalInitPosY = 1;
/* printf("%d\n", globalSide ); */
} /* inputSide */
int checkMAXSize(int localSIZE) {

  if (localSIZE > MAX_SIZE || localSIZE < 3 || localSIZE % 2 == 0) { /*stop*/ }
  else
      {
      /* task continues contingent on MAX_SIZE */
      populateArray();
      magicLoop();

      }

  return 0;
} /* checkMAXSize */
void populateArray() {

int  iHat;
int  jHat;

  /* Common method of priming arrays */
  /* By setting to 0's we can treat them as "false" later */
  memset( globalArray, 0, sizeof(globalArray) );

  //for ( iHat = 0; iHat < globalSide; iHat ++)
//      {
/* printf(  "\n"); printf(  "iHat = %d\n", iHat ); */
//for (jHat = 0; jHat < globalSide; jHat ++)
//  {
/* printf(  "jHat = %d\n", jHat ); */
//printf( "globalArray[%d][%d] = %d\n", iHat, jHat, globalArray[iHat][jHat] );
//}
//  }

  magicLoop();
} /* populateArray */
int magicLoop() {
   printf(  "LINE: 82 X = %d\n",  globalInitPosX);
   printf(  "LINE: 83 Y = %d\n",  globalInitPosY);

  int  intValue;
  int  iHat = globalInitPosX;
  int  jHat = globalInitPosY;

/* Start by placing the number 1 in the middle of row 0 */
/* start with 1 to fill first box; globalSide^2 from user */

  for ( intValue = 0; intValue <= globalSide * globalSide; intValue ++)
      {
       printf(  "LINE: 94 intValue =  %d\n",         intValue );
       printf(  "LINE: 95 iHat = %d jHat = %d\n\n",  iHat, jHat );

      // start with 1 and intValue less than or equal to globalSide^2
      for (intValue = 1; intValue <= (globalSide * globalSide); )
          {
          /*
           * if (iHat == -1 && jHat == globalSide)
           * //if x is out of bounds and y is max value
           * {
           * jHat = globalSide - 2;//down 2
           * //iHat = 0;
           * printf("LINE: 104 iHat = %d jHat = %d\n", iHat, jHat );
           * }
           *
           * else
           * {
           *
           * //if not zero
           * if (globalArray[iHat][jHat] != 0)
           *   {
           *   jHat --;
           *   //iHat;
           *   printf("LINE: 115 iHat = %d jHat = %d\n", iHat, jHat );
           *   continue;
           *   }
           * else
           *    {
           *     printf(  "LINE: 119 intValue = %d\n",              intValue );
           *     printf(  " globalArray[%d][%d] = %d\n\n\n",        iHat, jHat, intValue );
           *    globalArray[iHat][jHat] = intValue ++;
           *     printf(  "LINE: 121 intValue = %d\n",              intValue );
           *    jHat ++;
           *    //iHat ++;
           *     printf(  "LINE: 123 iHat = %d jHat = %d\n",        iHat,  jHat );
           *     printf(  "LINE: 124 globalArray[%d][%d] =  %d\n",  iHat,  jHat, globalArray[iHat][jHat] );
           *    }
           *
           * }
           */
          }

      intValue ++;
       printf("LINE: 131 intValue = %d\n", intValue );
      }

  return 0;
} /* magicLoop */
