#include <stdio.h>
#include <math.h>
#define PI 3.14159

// takes radius of circle and prints diameter, circumference and radius
int main() {
    float rad;
    printf("Enter radius of circle: \n");
    scanf("%f", &rad);
    printf("The diameter of the circle is: %f \n", rad * 2);
    printf("The circumference of the circle is: %f \n", 2 * PI * rad);
    printf("The area of the circle is: %f \n", PI * pow(rad, 2));
    return 0;
}
