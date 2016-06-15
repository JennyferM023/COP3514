#include <stdio.h>
main()

{
	float distance, rate; 
	int time;
	rate = 14.5;

	printf("Enter next time, or 0 to end: ");
	scanf( "%d", &time );

	while ( time > 0 ) {
		distance = rate * time;
		printf( "Time = %d hours \n", time);
		printf( "Distance = %f kilometers\n\n", distance ) ;
		printf( "Enter next time, or 0 to end: ");
		scanf( "%d", &time);
	}
	printf( "End of Program\n");
}
