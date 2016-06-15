#include <stdio.h>
main()
{
int n;

for (;;) {
        printf("Enter an integer (use 0 to signal the end):  ");
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d cubed is %d\n", n, n*n*n);
}
}
