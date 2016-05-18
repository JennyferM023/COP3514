#include <stdio.h>

double calculateSalary(int hours, double rate) {
    int overtime = hours - 40;
    int salary;
    if (overtime > 0) {
	salary = 40 * rate + overtime * (rate + (rate / 2));
    } else {
	salary = hours * rate;
    }
    return salary;
}

// calculates salary given hours and hourly pay rate
int main() {
    int hours;
    double rate;
    printf("Enter # of hours worked: ");
    scanf("%d", &hours);
    while(hours != -1) {
	printf("Enter hourly rate of the worker ($00.00): ");
	scanf("%lf", &rate);
	printf("Salary is $%.2f \n\n", calculateSalary(hours, rate));
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &hours);
    }
    return 0;
}
