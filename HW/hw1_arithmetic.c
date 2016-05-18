#include <stdio.h>

// take two numbers and print sum, product, difference, quotient
// and remainder
int main() {
    int a, b;
    printf("Enter two integers: \n");
    scanf( "%d%d", &a, &b);
    printf("The sum of %d and %d is %d \n", a, b, a + b);
    printf("The product of %d and %d is %d \n", a, b, a * b);
    printf("The difference of %d and %d is %d \n", a, b, a - b);
    printf("The quotient of %d and %d is %d \n", a, b, a / b);
    printf("The remainder of %d and %d is %d \n", a, b, a % b);
    return 0;
}
