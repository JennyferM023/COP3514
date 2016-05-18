#include <stdio.h>

// demonstration of swapping two variables
int main() {
    int a, b, temp;

    printf("Enter first integer value: \n");
    scanf("%d", &a);
    printf("Enter second integer value: \n");
    scanf("%d", &b);
    printf("\n");
    printf("The value of the first variable \"a\" is %d \n", a);
    printf("and the value of the second variable \"b\" is %d \n", b);
    printf("\n");

    temp = a;
    a = b;
    b = temp;

    printf("After the swap the value of the first variable \"a\" is %d \n", a);
    printf("and the value of the second variable \"b\" is %d \n", b);
    return 0;
}
