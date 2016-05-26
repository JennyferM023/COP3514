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
/*Declare some variables, CONSTANTS , etc */
#define MAX_SIZE 11 /* Generalizing for more dimensions */
int  globalSide;
int  globalArray[MAX_SIZE][MAX_SIZE]; /* prescribed MAX dimensions 11 x 11 */
int  globalInitPosX = MAX_SIZE / 2;/* just priming with max middle of columns */
int  globalInitPosY = MAX_SIZE - 1;/* just priming with max last row */
/* Declare some functions */
int   myMain();
void  inputSide();
void  checkMAXSize(int localSIZE);
void  populateArray();
void  magicLoop();
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
/* printf("%d\n", globalSide ); */
} /* inputSide */
void checkMAXSize(int localSIZE) {

  if (localSIZE > MAX_SIZE || localSIZE < 3 || localSIZE % 2 == 0) { /*stop*/ }
  else
      {
      /* task continues contingent on MAX_SIZE */
      populateArray();
      magicLoop();

      }
} /* checkMAXSize */
void populateArray() {

int  iHat;
int  jHat;

  /* Common method of priming arrays */
  /* By setting to 0's we can treat them as "false" later */
  memset( globalArray, 0, sizeof(globalArray) );

  for ( iHat = 0; iHat < globalSide; iHat ++)
      {
      /* printf(  "\n"); printf(  "iHat = %d\n", iHat ); */
      for (jHat = 0; jHat < globalSide; jHat ++)
          {
          /* printf(  "jHat = %d\n", jHat ); */
          printf( "globalArray[%d][%d] = %d\n", iHat, jHat, globalArray[iHat][jHat] );
          }
      }

  magicLoop();
} /* populateArray */
void magicLoop() {

int intValue;

int  iHat = globalInitPosX;
int  jHat = globalInitPosY;

/* Start by placing the number 1 in the middle of row 0 */
/* start with 1 to fill first box; globalSide^2 from user */
  for ( intValue = 1; intValue <= globalSide * globalSide; intValue ++)
      {
      //



      }




} /* magicLoop */
