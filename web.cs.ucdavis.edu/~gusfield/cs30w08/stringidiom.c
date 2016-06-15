/* This computes the length of a string input */
#include<stdio.h>

main()
{

char * p;
printf("type in a string with no blank spaces\n");

scanf("%s", p);

char * q = p;
int count = 0;

while (*q++);   /* this is the idiom */
printf("%d\n", q - p -1);
}
