/*
//  main.c
//  RandyMcMillanChap2_2PP
//
//  Created by randymcmillan on 5/17/16.
//  Copyright © 2016 randymcmillan. All rights reserved.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {

    float volume;
    int radius;
    radius = 10;
     /* 
      
      Compute the volume with a 10 meter radius
      
      */
    
    volume = ((4.0f/3.0f) * (3.141592654) * radius * radius* radius);
    printf("The Volume of the Sphere with a 10 meter radius os %f \n",volume);
    
    return 0;
}
