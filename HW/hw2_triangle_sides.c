#include <stdio.h>
#include <stdbool.h>

bool isTriangle(int a, int b, int c) {
    if((a < (c + b)) && (a > (c - b))) { return true; }
    else { return false; }
}

// determine if triangle is valid given sides
int main() {
    int a, b, c; //side lengths

    printf("Enter length of side 'a': ");
    scanf("%d", &a);
    printf("Enter length of side 'b': ");
    scanf("%d", &b);
    printf("Enter length of side 'c': ");
    scanf("%d", &c);
    if(isTriangle(a, b, c)) {
	printf("This is a valid triangle. \n");
    } else {
	printf("Not a valid triangle. \n");
    }
    return 0;
}
