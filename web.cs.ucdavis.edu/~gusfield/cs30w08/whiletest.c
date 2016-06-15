/* An alternative to the do while construct - but it requires a print and read first before the while loop */
#include<stdio.h>
main()
{
	int num;
	printf("input a positive number\n");
	scanf("%d", &num);

	while (num <=0) {
		printf("Really -Input a positive number\n");
		scanf("%d", &num);
	}

	printf ("Thanks for inputing %d\n", num);
}

