/*
 *   Randy McMillan
 *   U8173-5382
 *   Quiz 1
 *   COP 3514
 */
#include <stdio.h> /*preprocessor directive*/
/*Declare some variables and pointers*/
void myMain();
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

  printf( "%d\n", ( 8 % 5 * (1 || 0) ) );

}   /* myMain */
