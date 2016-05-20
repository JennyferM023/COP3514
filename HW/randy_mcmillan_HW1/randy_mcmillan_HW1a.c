/*
 *   Randy McMillan
 *   U8173-5382
 *   Homework 1
 *   COP 3514
 */
#include <stdio.h> /*preprocessor directive*/
#include <math.h>
/*Declare some variables and pointers*/
char  slashchar[1]     = "/";
char  *slashChar      = &slashchar[0];
int   a, b, c, d;
char  slash1;
char  *slash11 = &slash1;
char  slash2;
char  *slash22 = &slash2;
char  bool1, bool2;
int   error1, error2;
int   num, denom;
/*Declare some functions*/
void  myMain();
void  enterFirstFraction();
void  enterSecondFraction();
int   errorReport();
int   errorCheckFraction1();
int   errorCheckFraction2();
int   reportInput(
  int  a,
  int  b,
  int  c,
  int  d
  );
void additionOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  );
void subtractionOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  );
void multiplicationOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  );
void divisionOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  );
void decimalApproxOfFraction(
  int  num,
  int  denom
  );
void enterGPAofClass(
  int  a,
  int  b,
  int  c,
  int  d
  );
void gradeReport(
  int  a,
  int  b,
  int  c,
  int  d
  );
void  promptForRestart();
void  evalFract1(
  int  a,
  int  b
  );
void evalFract2(
  int  c,
  int  d
  );

/*
 *  Entry Point
 */
int main()
{
  a = b = c = d = 0; /*a little primer*/
  myMain();
  return 0;
}   /* main */
/*
 *  myMain is where things really start
 */
void myMain()
{
  /* User inputs 2 different fractions */
  enterFirstFraction();
  enterSecondFraction();
  /* more error checking needed but...*/
  errorReport();
  reportInput(a, b, c, d);
  additionOfFractions(a, b, c, d);
  subtractionOfFractions(a, b, c, d);
  multiplicationOfFractions(a, b, c, d);
  divisionOfFractions(a, b, c, d);
  evalFract1(a, b);
  evalFract2(c, d);
  decimalApproxOfFraction(a, b);
  enterGPAofClass(a, b, c, d);
  gradeReport(a, b, c, d);
}   /* myMain */
void enterFirstFraction()
{
  /* Prompt user to input variable */
  printf("Enter Fraction 1: ");
  /* Receieve the user input */
  scanf("%d%c%d", &a, &slash1, &b);
}   /* enterFirstFraction */
void enterSecondFraction()
{
  /* Prompt user to input variable */
  printf("Enter Fraction 2: ");
  /* Receieve the user input */
  scanf("%d%c%d", &c, &slash2, &d);
}   /* enterSecondFraction */
void evalFract1(
  int  a,
  int  b
  )
{
  if (a > b) {
     /* if a is greater than b */

     int  mixedMain = a / b;
     int  mixedModulus = a % b;

     if (mixedModulus == 0) {

         printf(  "Fraction 1 is an improper fraction.\n");
         printf(  "Fraction 1 as a mixed number %d\n", mixedMain);

        }
     else
         {
          printf(  "Fraction 1 is an improper fraction.\n");
          printf(  "Fraction 1 as a mixed number %d %d/%d\n", mixedMain, a % b, b );
         }
     }
  else
      {

      printf( "Fraction 1 is a proper fraction\n");

      }

}   /* evalFract1 */
void evalFract2(
  int  c,
  int  d
  )
{
  if (c > d) {
     /* if c is greater than d */

     int  mixedMain = c / d;
     int  mixedModulus = c % d;

     if (mixedModulus == 0) {

         printf(  "Fraction 2 is an improper fraction.\n");
         printf(  "Fraction 2 as a mixed number %d\n", mixedMain);

        }
     else
         {
          printf(  "Fraction 2 is an improper fraction.\n");
          printf(  "Fraction 2 as a mixed number %d %d/%d\n", mixedMain, c % d, b );
         }
     }
  else
      {

      printf( "Fraction 2 is a proper fraction\n");

      }
}   /* evalFract2 */
/*
 *
 *  House Keeping
 *
 */
int errorReport() /* begins an error checking loop */
{
  error1  = errorCheckFraction1();
  error2  = errorCheckFraction2();

  if ( (error1 == 0) && (error2 == 0) ) {
     return 0;
     }
  else
  if (error1 == 1)
          {
/*          printf("error1 = %d\n", error1); */
          enterFirstFraction();
          errorReport();
          }
  else
  if (error2 == 1)
          {
/*          printf("error2 = %d\n", error2); */
          enterSecondFraction();
          errorReport();
          }
  else
      {
      promptForRestart();
      }

  return 1; /*general error*/
}   /* errorReport */
int errorCheckFraction1()
{
  if (slash1 != * slashChar) {
     printf("Please reenter the first fraction in in the form of ###/### \n");
     return 1;
     }

  return 0;
}   /* errorCheckFraction1 */
int errorCheckFraction2()
{
  if (slash2 != * slashChar) {
     printf("Please reenter the second fraction in in the form of ###/### \n");
     return 1;
     }

  return 0;
}   /* errorCheckFraction2 */
int reportInput(
  int  a,
  int  b,
  int  c,
  int  d
  ) {

   printf(  "Fraction Number 1: %d/%d\n",  a,  b );
   printf(  "Fraction Number 2: %d/%d\n",  c,  d );

  return 0;
} /* reportInput */
void additionOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  ){

  printf( "Addition of Fractions: %d/%d\n", (a * d + c * b), (b * d) );

} /* additionOfFractions */
void subtractionOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  ){

  printf( "Subtraction of Fractions: %d/%d\n", (a * d - c * b), (b * d) );

} /* subtractionOfFractions */
void multiplicationOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  ){


  printf( "Multiplication of Fractions: %d/%d\n", (a * c), (b * d) );

} /* multiplicationOfFractions */
void divisionOfFractions(
  int  a,
  int  b,
  int  c,
  int  d
  ){

  printf( "Division of Fractions: %d/%d\n", (a * d), (b * c) );

} /* divisionOfFractions */
void decimalApproxOfFraction(
  int  a,
  int  b
  ){

  printf("The dec. App Of Fraction1 is %f\n", floor(a * b + 0.5) / 100);


} /* decimalApproxOfFraction1 */
void enterGPAofClass(
  int  a,
  int  b,
  int  c,
  int  d
  ){}
void gradeReport(
  int  a,
  int  b,
  int  c,
  int  d
  ){}

void promptForRestart()
{
  printf("restart? y or n?\n");
  scanf("%s", &bool1);

  switch (bool1) {
         case 'y':
          main();

         case 'n':
          break;

         default:
          break;
         } /* switch */

}   /* promptForRest */
