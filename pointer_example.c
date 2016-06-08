#include <stdio.h>

int main(void) {
  // Creating to ints, i and j
  int i, j;

  // Creating two int pointers, p and q
  int *p, *q;

  // Setting the value of i and j
  i = 2;
  j = 350;

  // Setting the value of p to the address of i
  p = &i;

  // Print the value of i and the dereferenced value of p (which should be the
  // same as i). Tab escape used to make formatting pretty.
   printf(  "The value of i:             \t%d\n",  i);
   printf(  "The dereferenced value of p:\t%d\n",  * p);
   printf(  "\n");

  // Print the address of i and the value of p (which should be the address of
  // i). The %p is the specifier for printing a pointer in C99 (variations in
  // format between different platforms). The values of this may look seemingly
  // useless and change every run, but the point is that they are always the
  // same.
    printf(  "The address of i:           \t%p\n",  &i);
    printf(  "The address held in p:      \t%p\n",  p);
    printf(  "\n");

  // Let us change the value of i by using the dereference operator on p
  * p = 10;

  // Now if we print the values again, they will both reflect the update.
     printf(  "The value of i:             \t%d\n",  i);
     printf(  "The dereferenced value of p:\t%d\n",  * p);
     printf(  "\n");

  // Let us change the p to point to another variable. This is done the same way
  // as above. Like with a normal value, it will just overwrite the current
  // value (address of i) with the new value (address of j)
  p = &j;

  // Checking the values again.
      printf(  "The value of i:             \t%d\n",  i);
      printf(  "The value of j:             \t%d\n",  j);
      printf(  "The dereferenced value of p:\t%d\n",  * p);
      printf(  "The address of i:           \t%p\n",  &i);
      printf(  "The address of j:           \t%p\n",  &j);
      printf(  "The address held in p:      \t%p\n",  p);
      printf(  "\n");

  // Let us now start using another pointer. We set q to the same value of p.
  // This now sets the value held in p (which is the address of j) to q.
  q = p;

  // Let's print the values out again to prove it. We should see p, q, and &j
  // as the same values
       printf(  "The value of j:             \t%d\n",  j);
       printf(  "The dereferenced value of p:\t%d\n",  * p);
       printf(  "The dereferenced value of q:\t%d\n",  * q);
       printf(  "The address of j:           \t%p\n",  &j);
       printf(  "The address held in p:      \t%p\n",  p);
       printf(  "The address held in q:      \t%p\n",  q);
       printf(  "\n");

  // Now that p and q are pointing to the same address (the variable j), we can
  // use the dereferencing of either p or q to change the value of j. we did
  // this with p earlier, let's do it again with j. Since we can treat a valid
  // dereferenced pointer to an int just like an int, let's do something a bit
  // more complicated.
  * q = * q + * p + i;

  // Above we dereference q (which is pointing to j) and add it to a
  // dereference p (which is also pointing to j) and add it to the value of i.
  // Let's print and see what has changed. This line above is just like
  // assigning to j since q is pointing to j.
        printf(  "The value of j:             \t%d\n",  j);
        printf(  "The dereferenced value of p:\t%d\n",  * p);
        printf(  "The dereferenced value of q:\t%d\n",  * q);
        printf(  "\n");

  return 0;
} /* main */
