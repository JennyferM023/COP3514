/*

  Randy McMillan

  U8173-5382

  Homework 1

  COP 3514

*/

#include <stdio.h>/*preprocessor directive*/
/*Declare some variables and pointers*/
char slashchar[1] = "/";
char *slashChar = &slashchar[0];
int a;
int b;
int c;
int d;
char slash1;
char *slash11 = &slash1;
char slash2;
char *slash22 = &slash2;
char bool1;
char bool2;
/* Declare some functions*/
void report();
void enterFirstFraction();
void enterSecondFraction();
int errorCheck();
void promptForRestart();

  int main() {
    a=b=c=d=0;
    enterFirstFraction();
    enterSecondFraction();
    report();
  return 0;
  }
void enterFirstFraction(){
      /* Prompt user to input variable*/
      printf("Enter a fraction (a/b): \n");
      /* Receieve the user input*/
      scanf( "%d%c%d", &a,&slash1,&b);
}
void enterSecondFraction(){
      /* Prompt user to input variable*/
      printf("Enter a fraction (c/d): \n");
      /* Receieve the user input*/
      scanf( "%d%c%d", &c,&slash2,&d);
}
void report()
{
    errorCheck();
    //printf("first fraction  is %d/%d\n" ,a,b );
    //printf("second fraction  is %d/%d\n",c,d );
}
int errorCheck()
{

/*
  printf("slash1 = %c \nslash2 = %c\n",slash1,slash2 );
  printf("*slash11 = %c \n*slash22 = %c\n",*slash11,*slash22 );
  printf("slashchar = %s \n*slashChar = %c\n",slashchar,*slashChar );
*/

  if (slash1 != *slashChar){
    printf("Please reenter fractions in in the form of ###/### \n");
    //promptForRestart();
    return 1;
  }else if (slash2 != *slashChar){
    printf("Please reenter fractions in in the form of ###/### \n");
    //promptForRestart();
    return 1;
  }
return 0;
}
void promptForRestart(){

    printf("restart? y or n?\n");
    scanf( "%s", &bool1);
      switch (bool1) {
        case 'y':
          main();
        case 'n':
          break;
        default:
          break;
      }
}
