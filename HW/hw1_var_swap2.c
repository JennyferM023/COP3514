#include <stdio.h>

// demonstration of swapping two variables using only 2 variables
int main() {
    int a, b;

    printf("Enter first integer value: \n");
    scanf("%d", &a);
    printf("Enter second integer value: \n");
    scanf("%d", &b);
    printf("\n");
    printf("The value of the first variable \"a\" is %d \n", a);
    printf("and the value of the second variable \"b\" is %d \n", b);
    printf("\n");

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After the swap the value of the first variable \"a\" is %d \n", a);
    printf("and the value of the second variable \"b\" is %d \n", b);
    return 0;
}
