#include <stdio.h>
#include <string.h>

// warning: modifies passed string!
void upcase(char* text) {
    int length = strlen(text);

    for(int i = 0; i < length; i++) {
	if((text[i] > 96) && (text[i] < 123)) {
	    text[i] = text[i] - 'a' + 'A';
	}
    }
}

// warning: modifies passed string!
void downcase(char* text) {
    int length = strlen(text);

    for(int i = 0; i < length; i++) {
	if((text[i] > 64) && (text[i] < 91)) {
	    text[i] = text[i] + 'a' - 'A';
	}
    }
}

// takes string input and prints same string upcased and downcased
int main() {
    char s[100];

    printf("Enter string: ");
    scanf("%[^\n]%*c", s);
    upcase(s);
    printf("String upcased: %s \n", s);
    downcase(s);
    printf("String downcased: %s \n", s);
    return 0;
}
