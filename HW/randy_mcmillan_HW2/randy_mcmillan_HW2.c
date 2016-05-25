/*
 *   Randy McMillan
 *   U8173-5382
 *   Homework 2 Magic Squares Excercise
 *   COP 3514
 */
#include <stdio.h>
#include <stdlib.h>
/* preprocessor directive */
/*Declare some variables, CONSTANTS , etc */
#define MAX_SIZE 11 /* Generalizing for more dimensions */
int  globalSide;
int  globalArray[MAX_SIZE][MAX_SIZE]; /* prescribed MAX dimensions 11 x 11 */
/* Declare some functions */
int   myMain();
void  inputSide();
void  checkMAXSize(int localSIZE);
void  populateArray();
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
  return 0;

}   /* myMain */
void inputSide()
{
  printf("Enter size of magic square: " );
  scanf("%d", &globalSide );
/* printf("%d\n", globalSide ); */
  checkMAXSize(globalSide);
} /* inputSide */
void checkMAXSize(int localSIZE) {

  if (localSIZE > MAX_SIZE || localSIZE < 3 || localSIZE % 2 == 0) {}
  else
      {

      populateArray();

      }
} /* checkMAXSize */
void populateArray() {

int  iHat;
int  jHat;

  for ( iHat = 0; iHat < globalSide; iHat ++)
      {
      printf("iHat = %d\n", iHat );

      for (jHat = 0; jHat < globalSide; jHat ++)
          {
          printf("jHat = %d\n", jHat );
          /* code */
          }

      /* code */
      }


} /* populateArray */
