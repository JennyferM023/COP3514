#include <stdio.h>
#include <stdlib.h>
main() {
char a;
printf("Write several lines of text with some extra spaces in the lines. Stop the program \n\
by entering an EOF character at the start of a line\n");


for ( ; ; ) {
   while ((a = getchar()) != '\n') {
     if (a == EOF) {
     return; 
     }
     if (a == ' ') {
     putchar(a);
        do {
          a = getchar();
        } while (a == ' ');
          if (a == EOF) {
        return; 
          }
      }
      putchar(a);
   }
   printf("\n");
}
}
