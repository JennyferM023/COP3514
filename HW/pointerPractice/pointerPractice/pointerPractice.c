//
//  pointerPractice.c
//  pointerPractice
//
//  Created by randymcmillan on 6/10/16.
//  Copyright © 2016 RandyMcMillan.net. All rights reserved.
//

#include <stdio.h>


int  pointerAssignment();
int  main(
  int         argc,
  const char  *argv[]
  ) {

   printf("begin main\n");
  int i;
  i = 1;
  int *p = &i;

    printf(  "p = %p\n",   p );
    printf(  "*p = %d\n",  * p );

  int j = * &i; /* same as j = i;  */
  p = &i;
  i = 1;


     printf(  "%d\n",  i); /* prints 1 */
     printf(  "%d\n",  * p);/* prints 1 */
  * p = 2;

     printf(  "%d\n",  i); /* prints 2 */
     printf(  "%d\n",  * p); /* prints 2 */


  /* WRONGS
   *
   * int *p;
   * printf("%d", *p);
   *
   * int *p;
   * p = 1;
   *
   */


  pointerAssignment();


  printf("end main\n");

  return 0;
} /* main */
int pointerAssignment(){

   printf("begin pointerAssignment\n");

  int i, j, *p, *q;


    printf(  "p = %d\n",   i );
    printf(  "p = %d\n",   j );
    printf(  "*p = %p\n",  p );
    printf(  "*p = %p\n",  q );
  //printf(  "*p = %d\n",  * p );
  //printf(  "*p = %d\n",  * q );





  p = &i;

     printf(  "p = %d\n",   i );
     printf(  "p = %d\n",   j );
     printf(  "*p = %p\n",  p );
     printf(  "*p = %p\n",  q );
     printf(  "*p = %d\n",  * p );
  //printf(  "*p = %d\n",  * q );
  q = p;

      printf(  "p = %d\n",   i );
      printf(  "p = %d\n",   j );
      printf(  "*p = %p\n",  p );
      printf(  "*p = %p\n",  q );
      printf(  "*p = %d\n",  * p );
      printf(  "*p = %d\n",  * q );

  * p = 1;
  * q = 2;
  q = p;
  * q = * p;

       printf(  "p = %d\n",   i );
       printf(  "p = %d\n",   j );
       printf(  "*p = %p\n",  p );
       printf(  "*p = %p\n",  q );
       printf(  "*p = %d\n",  * p );
       printf(  "*p = %d\n",  * q );
  p = &i;
  q = &j;
  i = 1;
  * q = * p;

        printf(  "p = %d\n",   i );
        printf(  "p = %d\n",   j );
        printf(  "*p = %p\n",  p );
        printf(  "*p = %p\n",  q );
        printf(  "*p = %d\n",  * p );
        printf(  "*p = %d\n",  * q );

        printf(  "end pointerAssignment\n");

  return 0;

} /* pointerAssignment */
