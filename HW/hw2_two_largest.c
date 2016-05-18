#include <stdio.h>

// return value of largest digit in array
int largest(int *digits, int n_digits) {
    int largest = digits[0];

    for(int i = 0; i < n_digits; i++) {
	if(digits[i] > largest) {
	    largest = digits[i];
	}
    }
    return largest;
}

// sets largest digit(s) in array to 0
void clear_largest(int *digits, int n_digits, int largest) {
    for(int i = 0; i < n_digits; i++) {
	if(digits[i] == largest) { digits[i] = 0; }
    }
}

// find largest and second largest digits in array
int main() {
    int n_digits = 10;
    int digits[n_digits];
    int largest_digit, second_largest_digit;

    for(int i = 0; i < n_digits; i++) {
	printf("Please enter digit: ");
	scanf("%d", &digits[i]);
    }
    largest_digit = largest(&digits[0], n_digits);
    clear_largest(&digits[0], n_digits, largest_digit);
    second_largest_digit = largest(&digits[0], n_digits);
    printf("The largest digit is %d, ", largest_digit);
    printf("and the second largest is %d. \n", second_largest_digit);
    return 0;
}
