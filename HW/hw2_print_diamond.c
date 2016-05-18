#include <stdio.h>

// foo
int main() {
    int height = 0;
    int spaces;
    int stars;

    while(height % 2 == 0) {
	printf("Enter height of diamond (odd number only please!): ");
        scanf("%d", &height);
    }
    spaces = (height - 1) / 2;
    stars = 1;
    // print top half
    while(spaces > 0) {
	for(int i = 0; i < spaces; i++) { printf(" "); }
	for(int i = 0; i < stars; i++) { printf("*"); }
	printf("\n");
	spaces--;
	stars += 2;
    }
    // print bottom half
    while(stars > 0) {
	for (int i = 0; i < spaces; i++) { printf(" "); }
	for (int i = 0; i < stars; i++) { printf("*"); }
	printf("\n");
	spaces++;
        stars -= 2;
    }
    return 0;
}
