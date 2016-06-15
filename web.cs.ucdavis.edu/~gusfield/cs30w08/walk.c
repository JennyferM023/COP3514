#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
void printarray (char array[10][10], int currenti, int currentj);

time_t seed;

#define FALSE 0;
#define TRUE 1;

typedef int bool;

main()
{

int i, j, currenti, currentj, move, movecount = 0;
bool leftpossible, uppossible, downpossible, rightpossible, legal;
char currentchar;

		seed = time(NULL);
		 srand(seed); 
/*		srand(5000); */

	char array[10][10];

	for (i = 0; i < 10 ; i++) {     /* initialize the array to have a dot in each position */
		for (j = 0; j < 10; j++) {
                array[i][j] = '.';
		}
	}

	currenti = currentj = 0;   /* where in the array the walk is */
	array[0][0] = currentchar = 'A';
	printarray(array, currenti, currentj);


	for(;;) {  /* continue until no move is possible */

        leftpossible = FALSE;
        uppossible = FALSE;
        downpossible = FALSE;
        rightpossible = FALSE;


        if ((currenti > 0) && (array[currenti - 1][currentj] == '.')) uppossible = TRUE; /*check up move */
        if ((currentj > 0) && (array[currenti][currentj-1] == '.')) leftpossible = TRUE;  /* check left move */
        if ((currenti < 9) && (array[currenti + 1][currentj] == '.')) downpossible = TRUE; /* check down move */
        if ((currentj < 9) && (array[currenti][currentj+1] == '.')) rightpossible = TRUE; /* check for right move */

        if (! (leftpossible || uppossible || downpossible || rightpossible)) break; /* if no legal moves possible break out of the for loop, which will exit the program */ 

        legal = FALSE;  /* Since a legal move is possible, find and make one */

	do {       /*  continue to look for a legal move */
		move = rand() % 4;
  /*            printf ("Selected move is: %d\n", move); */

		if ((move == 0) && (uppossible)) legal = TRUE;
		if ((move == 1) && (leftpossible)) legal = TRUE;
		if ((move == 2) && (downpossible)) legal = TRUE;
		if ((move == 3) && (rightpossible)) legal = TRUE;
        } while (!legal);

           /* Having found a legal move, execute it*/

           if (move == 0) currenti--;
           if (move == 1) currentj--;
           if (move == 2) currenti++;
           if (move == 3) currentj++;
	   currentchar++;
	   array[currenti][currentj] = currentchar;   /* mark the appropriate cell in array as occupied */

	printarray(array, currenti, currentj);
	   movecount++;
	   if (movecount == 25) break; /* stop if 25 moves have been made, i.e., A through Z have been printed  */

      }
}

/*************************************/

void  printarray (char array[10][10], int currenti, int currentj) 
{
	int i, j;
        printf("CURRENT POSITION %d %d \n", currenti, currentj);
	for (i = 0; i < 10 ; i++) {
		for (j = 0; j < 10; j++) {
                printf ("%c", array[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	return;
}
