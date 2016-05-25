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
void  checkMAXSize(int localSIZE);
void  populateArray();
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
  checkMAXSize(globalSide);
} /* inputSide */
void checkMAXSize(int localSIZE) {

  if (localSIZE > 11 || localSIZE < 3)
     {
     printf("Size MUST be less than %d\n", MAX_SIZE );
     inputSide();
     }
  else
      {
      populateArray();

      }
} /* checkMAXSize */
void populateArray() {

  for (int i = 1; i < (globalSide * globalSide + 1); i ++)
      {
      /* code */
      printf("i = %d\n globalSide = %d\n", i, globalSide );

      }

} /* populateArray */
