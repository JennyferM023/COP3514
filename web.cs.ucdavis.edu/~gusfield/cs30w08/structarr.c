#include<stdio.h>
main()

{

int i;
struct {int a[10]; } a1, a2;

for (i = 0; i < 10; i++)
 a1.a[i] = i;
 a2 = a1;

for (i = 0; i < 10; i++)
 printf("%d ",a2.a[i]);
}
