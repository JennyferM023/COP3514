/*how to explain why this does not work, while the programs ps3.c and ps5.c do. */
#include <stdio.h>
main()
{
int i;
  char * p[] = {"network","stein", "feermi"} ; 
  for (i = 0; i < 3; i++) {
     printf ("%s\n", *(p++));
  }
}
