#include<stdio.h>
/* this computes x to the power of n recursively, and iteratively. */

long recursivepower(int x, int n);
long iterativepower(int x, int n);

main()
{

int x,n;
long recursiveresult, iterativeresult;

printf("Input two positive integers  ");
scanf("%d %d", &x, &n);

recursiveresult = recursivepower(x,n); 
iterativeresult = iterativepower(x,n);

printf("The recuresive and the iterative results are %ld, %ld\n", recursiveresult, iterativeresult); 

}

/****************/

long recursivepower(int x, int n)
{

   if (n == 0)
     return 1;
   else
     return x * recursivepower(x, n-1);
}

/**************/

long iterativepower(int x, int n)
{
long result = 1;
int i;

   if (n == 0)
     return 1;
   else 
    for (i = 1; i <= n; i++) {
      result = result*x;
    }
   
 return result;
}


