#include<stdio.h>
#include<stdlib.h>
#include<time.h>


time_t seed;

main()
{

int card[52], i, j, savcard;

seed = time(NULL);
 srand(seed); 

for (i = 0; i <= 51; i++) {
	card[i] = i+1;
}

for (i = 0; i <= 51; i++) {
     j = rand() % 52;
     savcard = card[i];
     card[i] = card[j];
     card[j] = savcard;
}

for (i = 0; i <= 51; i++) {
	printf("%d ", card[i]);
}

printf("\n");

}

