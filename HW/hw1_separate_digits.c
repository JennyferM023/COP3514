#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// returns length of integer
int intLen(int input) {
    return floor(log10(abs(input))) + 1;
}

// takes integer from stdin and prints it separated by three spaces
// between each digit
int main() {
    int num, div;

    printf("Enter integer: \n");
    scanf("%d", &num);

    // makes power of 10 divisor, e.g. for num 2345 div is 1000,
    // for 345 div is 100, and so on
    div = 1;
    for (int i = 0; i < intLen(num) - 1; i++) {
	div *= 10;
    }

    while (num > 0) {
	int digit = num / div;
	printf("%d   ", digit);
	num %= div;
	div /= 10;
    }
    printf("\n");
    return 0;
}
