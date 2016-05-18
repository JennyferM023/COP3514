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
int error1,error2;
/*Declare some functions*/
void myMain();
void enterFirstFraction();
void enterSecondFraction();
int report();
int errorCheckFraction1();
int errorCheckFraction2();
void promptForRestart();

int main()
{
    a=b=c=d=0;
    myMain();
  return 0;
}
void myMain()
{
    enterFirstFraction();
    enterSecondFraction();
    report();
}
void enterFirstFraction()
{
      /* Prompt user to input variable*/
      printf("Enter the first fraction (a/b): \n");
      /* Receieve the user input*/
      scanf( "%d%c%d", &a,&slash1,&b);
}
void enterSecondFraction()
{
      /* Prompt user to input variable*/
      printf("Enter the second fraction (c/d): \n");
      /* Receieve the user input*/
      scanf( "%d%c%d", &c,&slash2,&d);
}
int report()/* begins an error checking loop */
{
    error1 = errorCheckFraction1();
    error2 = errorCheckFraction2();
    if (error1 == 0 && error2 == 0) {

      return 0;

    }else if (error1 == 1) {

      printf("error1 = %d\n",error1);
      enterFirstFraction();
      report();

    } else if (error2 == 1) {

      printf("error2 = %d\n",error2);
      enterSecondFraction();
      report();

    } else {

    promptForRestart();

    }
    return 1; /*general error*/
}
int errorCheckFraction1()
{
  if (slash1 != *slashChar)
  {
    printf("Please reenter the first fraction in in the form of ###/### \n");
    //promptForRestart();
    return 1;
  }
return 0;
}
int errorCheckFraction2()
{
  if (slash2 != *slashChar){
    printf("Please reenter the second fraction in in the form of ###/### \n");
    //promptForRestart();
  return 1;
}
return 0;
}
void promptForRestart()
{
    printf("restart? y or n?\n");
    scanf( "%s", &bool1);
      switch (bool1)
      {
        case 'y':
          main();
        case 'n':
          break;
        default:
          break;
      }
}
