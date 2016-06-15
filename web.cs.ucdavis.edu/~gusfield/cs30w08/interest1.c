/*********************************************************
 MODIFIED from 


 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* interest.c (Chapter 8, page 145) */
/* Prints a table of compound interest */

#include <stdio.h>

#define INITIAL_BALANCE 100.00

main()
{
  int i, low_rate, num_years, year, totrates;
  float value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);

  printf("Enter total number of rates\n");
  scanf("%d", &totrates);

  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < totrates; i++) {
    printf("%7d%", low_rate+i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%3d    ", year);
    for (i = 0; i < totrates; i++) {
      value[i] += (low_rate+i) / 100.0 * value[i];
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }

  return 0;

}
