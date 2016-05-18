/*

  Randy McMillan

  U8173-5382

  Homework 1

  COP 3514

*/

#include <stdio.h>
/*Declare some variables */
    int a;
    char slashChar[1] = "/";
    char slash1;
    char *slash11 = &slash1;
    int b;
    int c;
    char slash2;
    char *slash22 = &slash2;
    int d;
    int bool1 = 0;
    int bool2 = 0;/*zero or not zero flagging */
    int report();
    int errorCheck();
int main() {
    /* Prompt user to input variable*/
    printf("Enter a fraction (a/b): \n");
    /* Receieve the user input*/
    scanf( "%d%c%d", &a,&slash1,&b);
    /* Prompt user to input variable*/
    printf("Enter a fraction (c/d): \n");
    /* Receieve the user input*/
    scanf( "%d%c%d", &c,&slash2,&d);

    report();

    return 0;
}
int report()
{

    errorCheck();

    printf("first fraction  is %d/%d\n" ,a,b );
    printf("second fraction  is %d/%d\n",c,d );


return 0;
}
int errorCheck()
{

  printf("slashChar = %s\n",slashChar );


  if (slash1 < slash2 || slash1 > slash2) {
    if (slash11 != slashChar || slash22 != slashChar) {

    printf("Hmmm....\n");

    }
  }else{
    printf("Some errorChecking here\n");
  }
return 0;
}
