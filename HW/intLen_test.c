#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int intLen(int input) {
    return floor(log10(abs(input))) + 1;
}

int main() {
    int num, answer;
    printf("Enter integer: \n");
    scanf("%d", &num);
    answer = intLen(num);
    printf("The integer is %d digits long. \n", answer);
}
