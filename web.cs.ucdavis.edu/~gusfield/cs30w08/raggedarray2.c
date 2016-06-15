
/* An introduction to  pointers and ragged multidimensional arrays */
#include <stdio.h>
#include <stdlib.h>

void printnames (char ** p, int n); /* p is a pointer to a pointer that points to a char */
void printsecondchar (char ** p, int n); /* p is a pointer to a pointer that points to a char */
void printallchar (char ** p, int n); /* p is a pointer to a pointer that points to a char */

main()
{
	int k;
        char * q;
	char* phys[4] = {"Newton", "Einstein", "Fermi", "Heisenberg"}; /* phys is an array of 4 pointers,
                                                                       each to a char at the head of a 
                                                                       string */
        printf("The last name is %s\n", phys[3]);

        q = phys[0];
        printf("The first name is %s\n", q);
        printf("What will *q and *(q+1) print? %c%c \n", *q, *(q+1) );

	printnames(phys, 4);

	printsecondchar(phys, 4); /* the name of an array is an alias for the address of the first entry in
                             the array. In this case, that is the address of the first pointer in phys */

	printallchar(phys, 4); 
}

/*********************************/

void printnames (char ** p, int n)   /* p is a pointer that points not to a char, but to a pointer
                                        to char. Since those pointers come from phys, each of those
                                        pointers point to a char at the head of a string. What is passed
                                        (by value) to p, is the address of the first pointer in the array 
                                        phys, so to actually refer to that first pointer, we use *p.
                                        That is the essential  and subtle point */
{
int i;
printf("The full list of names \n");

for (i = 0; i < n; i++){
 	printf("%s\n", *p);
	p++;                           /* since p points to a particular pointer,  depending
                                      on the value of p, *p specifies that pointer, which points to the
                                       head of a string, and that string then can
                                      be printed using %s, and the pointer that p points to can be
                                      incremented by p++. Rember that when using %s, we need to supply
                                      the address where the string begins */
}
}

/**************************/

void printsecondchar (char ** p, int n) /* p is a pointer to a pointer that points to a char */
{

int i;
printf("The second character of each name\n");

  for (i = 0; i < n; i++){
 	printf("%c\n", *(*p + 1));
	p++;                           
} 
}


/****************************/
void printallchar (char ** p, int n) /* p is a pointer to a pointer that points to a char */
{

int i, j;
printf("All the chars of each name, but printing one character at a time, i.e., without a string conversion character.\n");

  for (i = 0; i < n; i++){
	  for (j = 0; *(*p + j) != '\0'; j++) {
 	printf("%c", *(*p + j));
        } 
	printf("\n");
	p++;                           
   }
}

