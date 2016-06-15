#include<stdio.h>

/* This shows that i and j in main and in testscope are both local variables
in both, and that i is passed to testscope by value. */

void testscope (int);

main()
{
int i, j;

i = 1;
j = 2;
printf("i and j before the function call %d %d\n", i,j);

testscope(i);

printf("i and j after the function call %d %d\n", i,j);
}

void testscope (i)
{
int j;
printf("the value of the local i at input is %d \n", i);
 
printf("i and j inside the function testscope %d %d\n", i,j);
i = 3;

j = 4;


}
