#include<stdio.h>
main()
{
int i,k;

struct onestudent {
	char name[20];
        float scores[3];
        int classyear;
};

struct onestudent students[100];
struct onestudent tempstudent;

scanf("%s", students[1].name);
students[1].scores[0] = 102.0;
students[1].scores[1] = 107.0;
students[1].scores[2] = 92.3;
students[1].classyear = 3;

k = 1;
for (i = 0; i < 3; i++)
printf("%f\n", students[k].scores[i]);

tempstudent = students[1];
students[5] = students[1];

printf("\n%s\n", tempstudent.name);
for (i = 2; i >= 0; i--)
printf("%f\n", tempstudent.scores[i]);
printf("The students class year is %d\n", tempstudent.classyear);
}

