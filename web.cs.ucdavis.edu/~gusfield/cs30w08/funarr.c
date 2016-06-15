#include <stdio.h>
#define N 100

void justfunin (int A[N][N], int n, int m);
int biggestfun (int A[N][N], int n, int m);
int oddfun (int A[N][N], int n, int m);
float evenmorefun (int A[N][N], int n, int m);

main()
{
int i, j, n, m, size, max, oddcount;
int A[N][N];
float evenaverage;

size = N;
printf("Input the number of rows and columns for the array, each at most %d\n", size);

scanf("%d %d", &n, &m);

justfunin(A, n, m);

printf("\nThe input array is:\n");
for (i = 0; i < n; i++) {
  for (j = 0; j < m; j++) {
    printf("%d ", A[i][j]);
  }
  printf("\n");
}

max = biggestfun(A, n, m);
printf("\nThe biggest number in the array is %d\n", max);
oddcount = oddfun(A, n, m);
printf("\nThe number of odd numbers in the array is %d\n", oddcount);
evenaverage = evenmorefun(A, n, m);
printf("\nThe average of all the numbers in columns of even index in the array is %.3f\n", evenaverage);
}

/*******************/

void justfunin (int A[N][N], int n, int m)
{
int i, j;
for (i = 0; i < n; i++) {
  printf("Input the %d entries for row %d\n", m, i); 
  for (j = 0; j < m; j++) {
    scanf("%d", &A[i][j]);
  }
}

}
  
/*****************/

int biggestfun (int A[N][N], int n, int m)
{
int i, j, max;
max = A[0][0];

for (i = 0; i < n; i++) {
  for (j = 0; j < m; j++) {
     if (A[i][j] > max) max = A[i][j];
  }
}
return max;
}

/******************/


int oddfun (int A[N][N], int n, int m)
{
int i, j, temp, oddcount = 0;

for (i = 0; i < n; i++) {
  for (j = 0; j < m; j++) {
     if (A[i][j] < 0) {
       temp = -A[i][j];
     }
     else temp = A[i][j];
     if (1 == temp % 2) oddcount++;
  }
}
return oddcount;
}

/******************/

float evenmorefun (int A[N][N], int n, int m)
{
int i, j, evensum = 0, evencount = 0;
float  evenaverage = 0;

for (i = 0; i < n; i++) {
  for (j = 0; j < m; j = j + 2) {
     evensum += A[i][j];
     evencount++;
/*     printf("%d %d %d\n ", A[i][j], evensum, evencount); */
  }
}
evenaverage = (float) evensum / evencount;
return evenaverage;
}

