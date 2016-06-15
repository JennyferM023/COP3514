#include <stdio.h>
main()
{
int i;
  char * pp[3] = {"network","stein", "feermi"} ; 
  char ** p;

  p = pp;

  for (i = 0; i < 3; i++) {
     printf ("%s\n", *(p++));
  }
}
