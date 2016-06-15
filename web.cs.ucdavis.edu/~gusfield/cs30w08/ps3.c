#include <stdio.h>
main()
{
int i;
  char * p[] = {"network","stein", "feermi"} ; 
  for (i = 0; i < 3; i++) {
     printf ("%s\n", *(p+ i));
  }
}
