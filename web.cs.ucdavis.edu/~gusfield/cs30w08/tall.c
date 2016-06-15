#include <stdio.h>
#include <math.h>

main()
{
        float ft, in;

        printf("Please enter heights in feet (example: 5.6 ft), end with a EOF character\n");
        while ( scanf( "%f", &ft ) != EOF) {
                in = 12 * ft;
                printf(" \n Height in feet = %.2f \n", ft);
                printf( "Height in inches = %.2f\n", in);
                if (in > 90.0) printf ("Too tall\n");
                else {
                  if ( in > 68.0)
                  {
                      if (in > 80.0) printf ("very Tall\n");
                      else {
                          printf("Tall\n");
                      }
                  }
                  else
                          printf("Not-tall\n");
               }

        }
}

