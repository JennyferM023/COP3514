//
//  main.c
//  Quiz3
//
//  Created by randymcmillan on 6/15/16.
//  Copyright © 2016 RandyMcMillan.net. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
   
    
    
   int commpare =  strcmp("time", "money") > 0;
    printf("conmpare = %d\n\n",commpare);
    
    //How many null characters are stored with “WoW” in char str[5]?
    
    char str[5] ="WoW";
    int i;
    for (i=0;i<strlen(str)+2;i++){
    
        printf("str[%d] = %s\n",i,&str[i]);
    
    }
    
    char str2[50];
//    unsigned long len;
    unsigned long len;
    
    strcpy(str2, "This is tutorialspoint.com");
    
    len = strlen(str2);
//    printf("Length of |%s| is |%lu|\n", str2, len);
    printf("Length of |%s| is |%lu|\n", str2, len);
    
    
    
    typeof(strlen("He\0llo! \0Wor\0ld”));
    
    char str3[80];
    unsigned long len2;
    strcpy(str3,"He\0llo! \0Wor\0ld");
//    len2=strlen("He\0llo! \0Wor\0ld");
    len2=strlen(str3);
    
    printf("%s is %lu\n\n",str3,len2);
    
    return 0;
}
