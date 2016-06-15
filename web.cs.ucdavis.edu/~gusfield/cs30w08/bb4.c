#include <stdio.h>

#define MSG_LEN 80     /* maximum length of message */

main()
{
  char msg[MSG_LEN], *p;

  int count;

  printf("Enter a message, ending with the return (enter) key: ");

/*  printf ("%p, %p\n", p, msg); */
 count = 0;

  for (p = msg; ;p++) {
    *p = getchar();
/*     printf ("%d %c %c\n", count, msg[count], *p);
     count++; */

    if (*p == '\n') break;
  }

  printf("Reversal is: ");

  for (p--; p >= msg; p--)
    putchar(*p);

    putchar('\n');

  return 0;
}
