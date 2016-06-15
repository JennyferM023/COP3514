#include "sorter.h"

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
