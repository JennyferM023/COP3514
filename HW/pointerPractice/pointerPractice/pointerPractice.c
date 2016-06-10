//
//  pointerPractice.c
//  pointerPractice
//
//  Created by randymcmillan on 6/10/16.
//  Copyright © 2016 RandyMcMillan.net. All rights reserved.
//

#include <stdio.h>

int main(
  int         argc,
  const char  *argv[]
  ) {
int i;
  i = 1;
  int *p = &i;

   printf(  "p = %p\n",   p );
   printf(  "*p = %d\n",  * p );





  return 0;
} /* main */
