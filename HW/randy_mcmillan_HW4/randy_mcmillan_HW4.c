/*
 *
 * Randy McMillan
 *
 * U8173-5382
 *
 * Homework 4
 *
 * COP 3514
 *
 */
#include <stdio.h>
/*
 * You will be writing 4 functions this time. clockwiseRotateTriangle,
 * reflectTriangle translateTriangle, and printTriangle.
 */
void clockwiseRotateTriangle (
  int  points,
  int  newPoints
  );
int reflectTriangle (
  int  points,
  int  newPoints
  );
void translateTriangle (
  int  x,
  int  y
  );
void printTriangle (
  int points[]);
int main(
  int         argc,
  const char  *argv[]
  )
{

  /*
   * To exemplify using arrays as both input and output values of functions,
   * I want you to write a program that deals with triangle transformations.
   * You will ask the user to input 3 sets of x and y pair coordinate points
   * and operate on those original points (remember, a triangle can be
   * represented with 3 points on a plane). You will be storing these points in
   * a multidimensional array with 3 rows and 2 columns ([3][2]). You will ask
   * the user to enter in each point pair one at a time. Refer to the sample
   * input/output for how.
   */
  /*
   * This program is a good example of using arrays as points and reiterates
   * using arrays as paramaters for functions. Only do your scanning in main.
   * You should be encapsulating functionality in your functions.
   */

  int originalArray[3][2];


  return 0;
} /* main */
void clockwiseRotateTriangle (
  int  points[3][2],
  int  newPoints[3][2]
  ){
  /*
   * The clockwiseRotateTriangle will rotate the triangle 90 degrees clockwise.
   * You shouldn't need the math library to complete this. The function will
   * return nothing. It will have arguments of an input array that holds the
   * points (the original triangle you had the user input) and an array to place
   * the new rotated triangle in.
   */
} /* clockwiseRotateTriangle */
int reflectTriangle (
  int  points[3][2],
  int  newPoints[3][2]
  ){
  /*
   * The reflectTriangle will reflect the triangle over the x or y axis.
   * You will
   * have the user input a axis via scanf in the form of a character (Do the
   * scanning in main). The function will return an integer, 0 or -1. 0 if the
   * axis was valid (x or y or X or Y) and -1 if it was invalid. It will have
   * arguments of an input array that holds the points
   * (the original triangle you
   * had the user input), an array to place the new reflect triangle in, and a
   * character to denote the axis to reflect over.
   */
} /* reflectTriangle */
void translateTriangle (
  int  x,
  int  y
  ){
  /*
   * The translateTriangle will translate the triangle an x and/or y direction.
   * You will have the user input a two values via scanf in the form of a
   * integers
   * (Do the scanning in main) to pass to the function for the translation. The
   * function will return nothing. It will have arguments of an input array that
   * holds the points (the original triangle you had the user input), an array
   * to
   * place the new translated triangle in,an integer to translate in the x
   * direction, and an integer to translate in y direction.
   */
} /* translateTriangle */
void printTriangle (
  int points[3][2]) {
  /*
   * Finally, you will have a printTriangle function for printing the
   * triangle on
   * the screen. This print triangle function will take in an input array that
   * holds the points of a triangle to print. You will then loop through the
   * array
   * to print the triangle. HOWEVER, I want you to iterate through the triangle
   * using pointer arithmetic (examples in chapter 12).
   */
} /* printTriangle */
/*
 *
 * Enter point #1 as x and y: 2 7
 * Enter point #2 as x and y: -3 4
 * Enter point #3 as x and y: -1 0
 * Starting Triangle: (2, 7)(-3, 4)(-1, 0)
 * Rotated Triangle: (7, -2)(4, 3)(0, 1)
 * Enter axis to reflect (x or y): y
 * Reflected Triangle: (-2, 7)(3, 4)(1, 0)
 * Enter translation values (x and y): 0 5
 * Translated Triangle: (2, 12)(-3, 9)(-1, 5)
 *
 * Enter point #1 as x and y: 8 5
 * Enter point #2 as x and y: 3 -2
 * Enter point #3 as x and y: -6 -7
 * Starting Triangle: (8, 5)(3, -2)(-6, -7)
 * Rotated Triangle: (5, -8)(-2, -3)(-7, 6)
 * Enter axis to reflect (x or y): x
 * Reflected Triangle: (8, -5)(3, 2)(-6, 7)
 * Enter translation values (x and y): -2 4
 * Translated Triangle: (6, 9)(1, 2)(-8, -3)
 *
 * Enter point #1 as x and y: 8 5
 * Enter point #2 as x and y: 3 -2
 * Enter point #3 as x and y: -6 -7
 * Starting Triangle: (8, 5)(3, -2)(-6, -7)
 * Rotated Triangle: (5, -8)(-2, -3)(-7, 6)
 * Enter axis to reflect (x or y): k
 * Reflected Triangle: Invalid Axis. Next time enter x or y.
 * Enter translation values (x and y): 0 0
 * Translated Triangle: (8, 5)(3, -2)(-6, -7)
 *
 */
