#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_LEN 1024

char* convertMonth(int month, char month_ret[]) {
    char* allMonths[] = {"January", "February", "March", "April",
			 "May", "June", "July", "August", "September",
                         "October", "November", "December"};
    return month_ret = allMonths[month - 1];
}

// convert date from 'mm/dd/yyyy' format to 'month-name dd, yyyy'
char* convertDate(char date[], char date_ret[]) {
    char input_month[3];
    char input_day[3];
    char input_year[5];
    char converted_month[9];
    char* converted_month_p;

    memcpy(input_month, &date[0], 2);
    memcpy(input_day, &date[3], 2);
    memcpy(input_year, &date[6], 4);
    input_month[2] = '\0';
    int month = atoi(input_month);
    converted_month_p = convertMonth(month, converted_month);
    strcpy(date_ret, converted_month_p);
    strcat(date_ret, " ");
    strcat(date_ret, input_day);
    strcat(date_ret, ",");
    strcat(date_ret, " ");
    strcat(date_ret, input_year);
    return date_ret;
}

// test program for date format conversion
// NO ERROR CHECKING! enter date as mm/dd/yyyy
int main() {
    char buffer[LINE_LEN];

    while(fgets(buffer, LINE_LEN, stdin) != NULL) {
	char tempDate[18];
	buffer[strlen(buffer) - 1] = '\0';
	printf("%s \n", convertDate(buffer, tempDate));
    }
    return 0;
}
