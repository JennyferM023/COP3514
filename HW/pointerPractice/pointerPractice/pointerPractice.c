//
//  pointerPractice.c
//  pointerPractice
//
//  Created by randymcmillan on 6/10/16.
//  Copyright © 2016 RandyMcMillan.net. All rights reserved.
//

#include <stdio.h>


int pointerAssignment(
  int  i,
  int  j,
  int  *p,
  int  *q
  );
int main(
  int         argc,
  const char  *argv[]
  ) {

   printf("begin main\n");
  int i;
  i = 1;
  int  *p = &i;
  int  j;
  int  *q;
    printf(  "i = %d\n",   i );
    printf(  "j = %d\n",   j );
    printf(  "&i = %p\n",  &i );
    printf(  "&j = %p\n",  &j );
    printf(  " p = %p\n",  p );
    printf(  " q = %p\n",  q );
    printf(  "*p = %d\n",  * p );
//    printf(  "*q = %p\n",  * q );
    printf(  "\n\n\n\n");

  j = * &i; /* same as j = i;  */
  p = &i;
  i = 1;
     printf(  "i = %d\n",   i );
     printf(  "j = %d\n",   j );
     printf(  "&i = %p\n",  &i );
     printf(  "&j = %p\n",  &j );
     printf(  " p = %p\n",  p );
     printf(  " q = %p\n",  q );
     printf(  "*p = %d\n",  * p );
  //printf(  "*q = %d\n",  * q );
     printf(  "\n\n\n\n");
  * p = 2;
     printf(  "i = %d\n",   i );
     printf(  "j = %d\n",   j );
     printf(  "&i = %p\n",  &i );
     printf(  "&j = %p\n",  &j );
     printf(  " p = %p\n",  p );
     printf(  " q = %p\n",  q );
     printf(  "*p = %d\n",  * p );
//     printf(  "*q = %d\n",  * q );
     printf(  "\n\n\n\n");

     printf(  "\n\n\n\n");

  /* WRONGS
   *
   * int *p;
   * printf("%d", *p);
   *
   * int *p;
   * p = 1;
   *
   */


  pointerAssignment(i, j, p, q);


  printf("end main\n");

  return 0;
} /* main */
int pointerAssignment(){

   printf("begin pointerAssignment\n");

  int i, j, *p, *q;


    printf(  "i = %d\n",   i );
    printf(  "j = %d\n",   j );
    printf(  "&i = %p\n",  &i );
    printf(  "&j = %p\n",  &j );
    printf(  " p = %p\n",  p );
    printf(  " q = %p\n",  q );
    printf(  "*p = %d\n",  * p );
    printf(  "*q = %d\n",  * q );
    printf(  "\n\n\n\n");



  p = &i;

     printf(  "i = %d\n",   i );
     printf(  "j = %d\n",   j );
     printf(  "&i = %p\n",  &i );
     printf(  "&j = %p\n",  &j );
     printf(  " p = %p\n",  p );
     printf(  " q = %p\n",  q );
     printf(  "*p = %d\n",  * p );
     printf(  "*q = %d\n",  * q );
     printf(  "\n\n\n\n");
  q = p;
     printf(  "i = %d\n",   i );
     printf(  "j = %d\n",   j );
     printf(  "&i = %p\n",  &i );
     printf(  "&j = %p\n",  &j );
     printf(  " p = %p\n",  p );
     printf(  " q = %p\n",  q );
     printf(  "*p = %d\n",  * p );
     printf(  "*q = %d\n",  * q );

     printf(  "\n\n\n\n");
  * p = 1;
  * q = 2;
  q = p;
  * q = * p;

      printf(  "i = %d\n",   i );
      printf(  "j = %d\n",   j );
      printf(  "&i = %p\n",  &i );
      printf(  "&j = %p\n",  &j );
      printf(  " p = %p\n",  p );
      printf(  " q = %p\n",  q );
      printf(  "*p = %d\n",  * p );
      printf(  "*q = %d\n",  * q );


      printf(  "\n\n\n\n");
  p = &i;
  q = &j;
  i = 1;
  * q = * p;

       printf(  "i = %d\n",   i );
       printf(  "j = %d\n",   j );
       printf(  "&i = %p\n",  &i );
       printf(  "&j = %p\n",  &j );
       printf(  " p = %p\n",  p );
       printf(  " q = %p\n",  q );
       printf(  "*p = %d\n",  * p );
       printf(  "*q = %d\n",  * q );

       printf(  "end pointerAssignment\n");

       printf(  "\n\n\n\n");
  return 0;

} /* pointerAssignment */
