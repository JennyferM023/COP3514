#include <stdio.h>
#include <math.h>

main()
{
	float mc, ph;

	while ( scanf( "%f", &mc ) != EOF) {
		ph = -log10( mc );
		printf(" \n Molar Concentration = %e \n", mc);
		printf( "pH = %f\n", ph);
		if ( ph < 7.0) 
			printf("Acidic \n");
		else 
			printf("Nonacidic \n");
               
	}
}
