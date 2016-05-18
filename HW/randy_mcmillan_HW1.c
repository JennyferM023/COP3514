/*

  Randy McMillan

  U8173-5382

  Homework 1

  COP 3514

*/

#include <stdio.h>/*preprocessor directive*/
/*Declare some variables*/
const char slashChar[1] = "/";
int a;
int b;
int c;
int d;
char slash1;
char *slash11 = &slash1;
char slash2;
char *slash22 = &slash2;
char bool1;
char bool2;/*zero or not zero flagging */
int report();
int errorCheck();
int enterFirstFraction();
int enterSecondFraction();
int promptForRestart();

  int main() {
    a=b=c=d=0;
    enterFirstFraction();
    enterSecondFraction();

    report();

  return 0;
  }


int enterFirstFraction(){

      /* Prompt user to input variable*/
      printf("Enter a fraction (a/b): \n");
      /* Receieve the user input*/
      scanf( "%d%c%d", &a,&slash1,&b);
  return 0;
}
int enterSecondFraction(){

      /* Prompt user to input variable*/
      printf("Enter a fraction (c/d): \n");
      /* Receieve the user input*/
      scanf( "%d%c%d", &c,&slash2,&d);
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
printf("slash11 = %s \nslash22 = %s\n",slash11,slash22 );

  if ((slash11 != slashChar) || (slash22 != slashChar)){

    printf("WTF\n");
    printf("Please reenter fractions in in the form of ###/### \n");

    promptForRestart();

  }

return 0;
}
int promptForRestart(){

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
return 0;
}
