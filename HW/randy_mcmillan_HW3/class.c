/*
 *
 * Randy McMillan
 *
 * U8173-5382
 *
 * Homework
 *
 * COP 3514
 *
 */
#include <stdio.h>
int main(
  int         argc,
  char const  *argv[]
  ) {



//p = malloc( 10 * sizeof(int) );
//printf( "%ld\n", sizeof(int) );

//int  *p;
//int  a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };


  /* for (p = a; p < a + 10; p ++)
   * for (int i = 0; i < 10; i ++)
   *  {
   *  p[i] = i;
   *  printf("%d\n", p[i] );
   *
   *  }
   */


  int  *p, *q;
  int  a[3][3] =
  {
    { 0, 1, 2 }, { 0, 1, 2, }, { 0, 1, 2, }
  };

  for (p = a[0]; p < a[0] + 3; p ++)
    {

    for (q = p; q < *p[0] + 3; q ++)
      {

      printf("%d\n", *q );

      }

    printf("\n");

    }


//free(p);

  return 0;
} /* main */
