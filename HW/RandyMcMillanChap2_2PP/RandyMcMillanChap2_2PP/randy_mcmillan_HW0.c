/*
//  main.c
//  RandyMcMillanChap2_2PP
//
//  Created by randymcmillan on 5/17/16.
//  Copyright © 2016 randymcmillan. All rights reserved.
*/

#include <stdio.h>

    float volume;
    int radius = 10;
    int i;

    /*int output();*/

int main(int argc, const char * argv[]) {

    
    printf("\nargc - %d\n\n",argc);
    
    for (i=0;i < (sizeof (argv[i]));i++) {
        printf("LINE:22 i = %d\n",i);
        printf("LINE:23 argv[%d] - %s\n",i,argv[i]);
        printf("argv[%d] - %s\n\n",i,argv[i]);
    }
   
     /*output();*/
    
    return 0;
}

int output(){


    volume = ((4.0f/3.0f) * (3.141592654) * radius * radius* radius);
    printf("The Volume of the Sphere with a %d meter radiusis %f \n",radius,volume);
    
    return 0;
    
}