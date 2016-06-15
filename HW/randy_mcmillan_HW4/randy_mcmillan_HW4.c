/*
 *
 * Randy McMillan
 *
 * U8173-5382
 *
 * Homework 1
 *
 * COP 3514
 *
 */
#include <stdio.h>

/*
 * You will be writing 4 functions this time. clockwiseRotateTriangle,
 * reflectTriangle translateTriangle, and printTriangle.
 */

/*
 * The clockwiseRotateTriangle will rotate the triangle 90 degrees clockwise.
 * You shouldn't need the math library to complete this. The function will
 * return nothing. It will have arguments of an input array that holds the
 * points (the original triangle you had the user input) and an array to place
 * the new rotated triangle in.
 */
void clockwiseRotateTriangle (
  int  points,
  int  newPoints
  );

/*
 * The reflectTriangle will reflect the triangle over the x or y axis. You will
 * have the user input a axis via scanf in the form of a character (Do the
 * scanning in main). The function will return an integer, 0 or -1. 0 if the
 * axis was valid (x or y or X or Y) and -1 if it was invalid. It will have
 * arguments of an input array that holds the points (the original triangle you
 * had the user input), an array to place the new reflect triangle in, and a
 * character to denote the axis to reflect over.
 */
int reflectTriangle (
  int  points,
  int  newPoints
  );

/*
 * The translateTriangle will translate the triangle an x and/or y direction.
 * You will have the user input a two values via scanf in the form of a integers
 * (Do the scanning in main) to pass to the function for the translation. The
 * function will return nothing. It will have arguments of an input array that
 * holds the points (the original triangle you had the user input), an array to
 * place the new translated triangle in,an integer to translate in the x
 * direction, and an integer to translate in y direction.
 */
void translateTriangle (
  int  x,
  int  y
  );

/*
 * Finally, you will have a printTriangle function for printing the triangle on
 * the screen. This print triangle function will take in an input array that
 * holds the points of a triangle to print. You will then loop through the array
 * to print the triangle. HOWEVER, I want you to iterate through the triangle
 * using pointer arithmetic (examples in chapter 12).
 */
void printTriangle ();



int main(
  int         argc,
  const char  *argv[]
  )
{

  /*
   * This program is a good example of using arrays as points and reiterates
   * using arrays as paramaters for functions. Only do your scanning in main.
   * You should be encapsulating functionality in your functions.
   */

  return 0;
} /* main */
void clockwiseRotateTriangle (
  int  points,
  int  newPoints
  ){}

int reflectTriangle (
  int  points,
  int  newPoints
  ){}

void translateTriangle (
  int  x,
  int  y
  ){}

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
