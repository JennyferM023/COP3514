/*
 *   Randy McMillan
 *   U8173-5382
 *   Homework 2 Magic Squares Excercise
 *   COP 3514
 */
#include <stdio.h> /* preprocessor directive */
/*Declare some variables, CONSTANTS , etc */
#define MAX_SIZE 11 /* Generalizing for more dimensions */
int  globalSide;
int  globalArray[MAX_SIZE][MAX_SIZE]; /* prescribed MAX dimensions 11 x 11 */
/* Declare some functions */
void  myMain();
void  inputSide();
/*
 *  Entry Point
 */
int main()
{
  myMain();
  return 0;
}   /* main */
/*
 *  myMain is where things really start
 */
void myMain()
{
  inputSide();

}   /* myMain */
void inputSide()
{

  printf("Enter size of magic square: " );
  scanf("%d", &globalSide );
  printf("%d\n", globalSide );
} /* inputSide */
