/*********************************************************
 Modified Jan. 2008 by Dan Gusfield 

 * From C PROGRAMMING: A MODERN APPROACH, by K. N. King  *
 * Copyright (c) 1996 W. W. Norton & Company, Inc.       *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* checking.c (Chapter 6, page 101) */
/* Balances a checkbook */

#include <stdio.h>

main()
{
  char cmd;
/*  int cmd; */
  float balance = 0.0, credit, debit;

  printf("*** ACME checkbook-balancing program ***\n");
  printf("Commands: c = clear, r = credit, d = debit, ");
  printf("b = balance, e = exit\n\n");
  for (;;) {
    printf("Enter command: ");
    scanf(" %c", &cmd);
    switch (cmd) {
      case 'c':
        balance = 0.0;
        break;
      case 'r':
        printf("Enter amount of credit: ");
        scanf("%f", &credit);
        balance += credit;
        break;
      case 'd':
        printf("Enter amount of debit: ");
        scanf("%f", &debit);
        balance -= debit;
        break;
      case 'b':
        printf("Current balance: $%.2f\n", balance);
        break;
      case 'e':
        return 0;
      default:
         printf("What you entered is not a correct command. Commands: c = clear, r = credit, d = debit, ");
         printf("b = balance, e = exit\n\n");
        break;
    }
  }
}
