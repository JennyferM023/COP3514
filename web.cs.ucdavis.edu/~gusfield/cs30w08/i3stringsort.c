#include<stdio.h>
#include<string.h>
#define MAXROW 100
#define MAXCOL 100

void twodsort(int [][MAXCOL], char [][MAXCOL], int, int, int);
void introwswap (int [][MAXCOL], int, int, int);
void stringsort (int [][MAXCOL], char [][MAXCOL], int, int);
void stringswap (char [][MAXCOL], int, int);
void dataprint(char [][MAXCOL], int [MAXROW] [MAXCOL], int, int);


main()
{
int ar[MAXROW][MAXCOL],n, m, i,j, col;
char cflag, names[MAXROW][MAXCOL];

        do {
        printf("Enter the number of students and the number of scores \n");
        scanf("%d%d", &n, &m);
        }
        while (n > MAXROW || m > MAXCOL);

        for (i = 0; i < n; i++) {

          printf("Enter the last name of student %d (no spaces in the name) followed by Enter\n",i+1);
          scanf ("%s", names[i]);

          printf("Enter %d integer scores for the student %s \n",m, names[i]);
                for (j = 0; j < m; j++) {
                  scanf ("%d", &ar[i][j]);
	        }
        }


  printf("Now we will see if the data got entered correctly\n"); 

   dataprint(names, ar, n, m);

getchar(); /* this consumes the leftover ENTER character */

for (;;) {

printf("Enter N if you want to sort on the names, or C if you want to sort on a column, or E to exit\n");
cflag = getchar();
getchar();
printf ("You entered %c\n", cflag);

if (cflag == 'E') return;
 
 if (cflag  == 'C') {
   printf("Enter a column number between 1 and %d to sort on: ", m);
   scanf (" %d", &col);
   getchar();
   printf("The entry was %d\n ", col);

   twodsort (ar, names, n, m, col-1);

/*        for (i = 0; i < n; i++) {
              printf("%s  ", names[i]);
        } */

     printf("\n\nNow we will see if the array got sorted correctly on column %d\n", col); 
     dataprint(names, ar, n, m);
}
 else {

     stringsort(ar, names, n, m);
     printf("\n\nNow we will see if the array got sorted correctly on the names\n"); 
     dataprint(names, ar, n, m);
 }
}

}



/***************************/

void introwswap (int terms[][MAXCOL], int i, int i1, int m )
{

int temp[MAXCOL], jj;

	for (jj = 0; jj < m; jj++) {
		temp[jj] = terms[i][jj];  	
        }

	for (jj = 0; jj < m; jj++) {
		terms[i][jj] = terms[i1][jj];  	
        }

	for (jj = 0; jj < m; jj++) {
		terms[i1][jj] = temp[jj];  	

        }
} 

/***************************/

void twodsort(int scores[MAXROW][MAXCOL], char terms[MAXROW][MAXCOL], int n, int m, int colindex)
{
int i, k, lsmall;

	for (i = 0; i < n; i++) {

	         lsmall = i;
       		 for (k = i+1; k < n; k++) {

		 	if (scores[k][colindex] < scores[lsmall][colindex]) {
			lsmall = k;
 			}
		}
/*  	printf ("%d: %d\n",i, scores[lsmall][colindex]);  */
        introwswap (scores, i, lsmall, m);
        stringswap (terms, i, lsmall);
	}
}


/**********************/
void stringswap (char terms[][MAXCOL], int i, int j ) 

{

char temp[MAXCOL];
strcpy (temp, terms[i]);
strcpy (terms[i], terms[j]);
strcpy (terms[j], temp);

} 


/***********************************/

void stringsort( int scores[][MAXCOL], char strings [][MAXCOL], int n, int m)
{

int lsmall, i, j, cvalue;

	for (i = 0; i < n; i++) {

	         lsmall = i;
       		 for (j = i+1; j < n; j++) {

                 cvalue = strcmp(strings[j],strings[lsmall]);
/*                 printf("i = %d j = %d lsmall = %d cvalue = %d\n",i, j, lsmall, cvalue); */

		 	if (strcmp(strings[j],strings[lsmall]) < 0) {
			lsmall = j;
 			}
		}
/*	printf ("%d: %s\n",i, strings[lsmall]);  */
	stringswap (strings, i, lsmall);
        introwswap (scores, i, lsmall, m);
	}
}

/*******************************/

void dataprint(char names [][MAXCOL], int scores[MAXROW] [MAXCOL], int n, int m)
{
int i,j;

        for (i = 0; i < n; i++) {
              printf("%s\t", names[i]);     /* Note the tab here */
		for (j = 0; j < m; j++) {
                  printf("%4d ", scores[i][j]);  /* Note the formatted IO */
	        }
                printf("\n");
        }
}
