#include <stdio.h>

int integerPower(int base, int exp) {
    int result = 1;
    if(exp == 0) { ; }
    else if(exp == 1){ result = base;}
    else { for(int i = 0; i < exp; i++) { result *= base; } }
    return result;
}

// prints base^exp
int main() {
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("%d to the %d-th power is %d \n", base, exp, integerPower(base, exp));
    return 0;
}
