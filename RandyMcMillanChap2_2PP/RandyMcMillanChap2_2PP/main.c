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

int main(int argc, const char * argv[]) {

    
    int i;
    for (i=0;i < (sizeof (argv[i]));i++) {
        printf("print - %s\n",argv[i]);
        printf("argc - %d,\nargv[%s] - %s\n",argc,argv[i],argv[i]);
    }
   
    int output();
    
    return 0;
}

int output(){


    volume = ((4.0f/3.0f) * (3.141592654) * radius * radius* radius);
    printf("The Volume of the Sphere with a %d meter radiusis %f \n",radius,volume);
    
    return 0;
    
}