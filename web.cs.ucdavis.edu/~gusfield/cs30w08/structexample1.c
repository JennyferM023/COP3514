#include<stdio.h>
main()
{
int i,j,k,n;
char studentname[20];
FILE *fin;
fin = fopen("students.dat", "r");

struct onestudent {
	char name[20];
        float scores[3];
        int classyear;
};

struct onestudent students[100];
struct onestudent tempstudent;

fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
   		fscanf(fin, "%s", students[i].name); 
                printf("after input %s\n", students[i].name);

	        for (j = 0; j < 3; j++) {
		fscanf(fin,  "%f", &students[i].scores[j]);
	        }
                fscanf(fin, "%d", &students[i].classyear);
         }


k = 1;
for (i = 0; i < 3; i++)
printf("%f\n", students[k].scores[i]);

tempstudent = students[1];
students[5] = students[1];

printf("\n%s\n", tempstudent.name);
for (i = 2; i >= 0; i--)
printf("%f\n", tempstudent.scores[i]);
printf("Class year is %d\n", tempstudent.classyear);
}
