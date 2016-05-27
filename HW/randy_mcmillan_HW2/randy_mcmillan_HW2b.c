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


/*
 * Store the magic square in a two dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, ... , n2 by moving up one row and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. For example, instead of storing the next number in row -1 (row negative 1), we would store it in row n - 1 (the last row). Instead of storing the next number in column n, we would store it in column 0. If a particular element is already occupied, put the number directly below the previously stored number.
 * The magic square only needs to be up to 11 by 11 and can only be created from odd numbers.
 * I want you to use functions for this project. I would like you to separately declare and define 3 separate functions. One for creating the magic square and putting it the two dimensional array. One for printing the magic square (for your printf, use 5 minimum field width). Finally, one for getting and returning the sum of the numbers in the magic square array.
 * Take in input in the main function. If the input is an even number or is a number not between 1 and 11, exit the program. Also, print the value of the sum of magic numbers via the main function, since your function to calculate this should only be returning a integer.
 * For the sum of all the numbers in the magic square array, I want you to use while loops. You can use either for loops or while loops for the print and create magic number functions.
 * HINT: The only function that needs to return something is the sum magic square function (integer). The other two function don't need to return anything. C is a pass by value language, meaning that it typically can't change the values of arguments in functions. This doesn't apply to arrays because they are references (more in chapter 12). That means one argument in the functions should be a two dimensional array. You will be able to operate on this array.
 */
#include <stdio.h>

int main(
  int         argc,
  const char  *argv[]
  ) {
  /* Think monolithic... As in BASIC Programming 1991! */





  return 0;
} /* main */
