/* modification of program psum.c. Recall that when you use the name of an array, it is actually the
address of element 0 in the array, so it is essentially a pointer, and hence you can use
pointer arithmetic, as shown in the while loop here. The while also shows a tricky (but very common) way
to access the value, via a pointer, and increment the pointer. Be careful about such things. */

#include<stdio.h>
#define N 10
main()
{
int a[N], sum = 0, *p, i;

for (i = 0; i < N; i++) {
   a[i] = i;
}

 p = a;
 while (p < a + 10) sum += *p++;

printf ("the sum is %d\n", sum);
} 
