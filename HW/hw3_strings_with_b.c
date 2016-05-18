#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LINE_LEN 1024

bool startsWithb(char str[]) { return str[0] == 'b'; }

// test program to take N string inputs and print those starting with 'b'
int main() {
    const int N_STRINGS = 10;
    char buffer[LINE_LEN];
    char* strings[N_STRINGS];

    for(int i = 0; i < N_STRINGS; i++) {
	fgets(buffer, LINE_LEN, stdin);
	buffer[strlen(buffer) - 1] = '\0';
	strings[i] = malloc(strlen(buffer) + 1);
	strcpy(strings[i], buffer);
    }
    for(int i = 0; i < N_STRINGS; i++) {
	if(startsWithb(strings[i])) { printf("PRINT: %s \n", strings[i]); }
    }
    return 0;
}
