#include<stdio.h>
#include<string.h>
#define MAX 101
#define MAXCOLS 100

void isort(int [], int);
void intswap (int [], int, int);
main()
{
int scores[MAX];
int n, lsmall, cvalue, i,j;

        printf("Enter the number of integers (at most 100) that will be entered \n");
        scanf("%d", &n);

        printf("Enter %d integers \n", n);
        for (i = 0; i < n; i++) {
                  scanf ("%d", &scores[i]);
	        }

        printf("\n\nThe integers you entered are: \n");
        for (i = 0; i < n; i++) {
		printf("%i\n", scores[i]);
        }

        isort(scores, n);

        printf("\n\nThe integers in sorted order are:\n");
        for (i = 0; i < n; i++) {
		printf("%d\n", scores[i]);
        }
}

/***************************/

void intswap (int terms[], int i, int j ) /*when you pass a multi-dimensional array to a function, only the
							 first dimension can be missing in the header */
{

int temp;
temp = terms[i];
terms[i] =  terms[j];
terms[j] =  temp;
} 

/***************************/

void isort(int scores[MAX], int n)
{
int i, j, lsmall;

	for (i = 0; i < n; i++) {

	         lsmall = i;
       		 for (j = i+1; j < n; j++) {

		 	if (scores[j] < scores[lsmall]) {
			lsmall = j;
 			}
		}
/*	printf ("%d: %d\n",i, scores[lsmall]); */
        intswap (scores, i, lsmall);
	}
}
