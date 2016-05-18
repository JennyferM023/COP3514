#include <stdio.h>
#include <string.h>
#define LINE_LEN 1024

// returns integer given string representation
int strtoint(char str[]) {
    int offset = 0;
    int sign = 1;
    int num = 0;

    if(str[0] == '-') { offset = 1; sign = -1;}
    if(str[0] == '+') { offset = 1; }
    for(int i = offset; i < strlen(str); i++) {
	num = num * 10 + (str[i] - '0');
    }
    return num * sign;
}

// test program that does N string to int conversions and sums them
// NOT safe from overflow!
int main() {
    const int N_CONVERSIONS = 4;
    char buffer[LINE_LEN];
    int sum = 0;

    for(int i = 0; i < N_CONVERSIONS; i++) {
	fgets(buffer, LINE_LEN, stdin);
	buffer[strlen(buffer) - 1] = '\0';
	sum += strtoint(buffer);
    }
    printf("The sum is: %d \n", sum);
    return 0;
}
