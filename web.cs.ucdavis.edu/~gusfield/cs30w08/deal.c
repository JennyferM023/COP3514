/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* deal.c (Chapter 8, page 150) */
/* Deals a random hand of cards */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMSUITS 4
#define NUMRANKS 13
#define TRUE 1
#define FALSE 0

typedef int Bool;

main()
{
  Bool inhand[NUMSUITS][NUMRANKS] = {0};
  int numcards, rank, suit;
  const char rankcode[] = {'2','3','4','5','6','7','8',
                            '9','t','j','q','k','a'};
  const char suitcode[] = {'c','d','h','s'};

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &numcards);

  printf("Your hand:");
  while (numcards > 0) {
    suit = rand() % NUMSUITS;     /* picks a random suit */
    rank = rand() % NUMRANKS;     /* picks a random rank */
    if (!inhand[suit][rank]) {
      inhand[suit][rank] = TRUE;
      numcards--;
      printf(" %c%c", rankcode[rank], suitcode[suit]);
    }
  }
  printf("\n");

  return 0;
}
