#include <stdio.h>

#define FREEZE 32.0
#define SCALE (5.0/9.0)

main()
{
float far, cel;

   printf("Enter a Fahrenheit temperature: ");
   scanf("%f", &far);
   
   cel = (far - FREEZE) * SCALE;

   printf("The Celsius equivalent of %.1f degrees Fahrenheit is %.1f \n", far, cel);

return 0;

}
