/*
 *   Randy McMillan
 *   U8173-5382
 *   Homework 1
 *   COP 3514
 */
#include <stdio.h> /*preprocessor directive*/
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
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void additionOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void subtractionOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void multiplicationOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void divisionOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void decimalApproxOfFraction(
  int    localA,
  int    localB,
  float  localFloat
  );
void enterGPAofClass(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void gradeReport(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  );
void  promptForRestart();
void  evalFract1(
  int  localA,
  int  localB
  );
void evalFract2(
  int  localC,
  int  localD
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
  decimalApproxOfFraction(a, b, 0);
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
  int  localA,
  int  localB
  )
{
  if (localA > localB) {
     /* if a is greater than b */

     int  mixedMain = localA / localB;
     int  mixedModulus = localA % localB;

     if (mixedModulus == 0) {

         printf(  "Fraction 1 is an improper fraction.\n");
         printf(  "Fraction 1 as a mixed number %d\n", mixedMain);

        }
     else
         {
          printf(  "Fraction 1 is an improper fraction.\n");
          printf(  "Fraction 1 as a mixed number %d %d/%d\n", mixedMain, localA % localB, localB );
         }
     }
  else
      {

      printf( "Fraction 1 is a proper fraction\n");

      }

}   /* evalFract1 */
void evalFract2(
  int  localC,
  int  localD
  )
{
  if (localC > localD) {
     /* if c is greater than d */

     int  mixedMain = localC / localD;
     int  mixedModulus = localC % localD;

     if (mixedModulus == 0) {

         printf(  "Fraction 2 is an improper fraction.\n");
         printf(  "Fraction 2 as a mixed number %d\n", mixedMain);

        }
     else
         {
          printf(  "Fraction 2 is an improper fraction.\n");
          printf(  "Fraction 2 as a mixed number %d %d/%d\n", mixedMain, localC % localD, localD );
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
      a = b = c = d = 0;   /*a little primer*/
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
  int  localA,
  int  localB,
  int  localC,
  int  localD
  ) {

   printf(  "Fraction Number 1: %d/%d\n",  localA,  localB );
   printf(  "Fraction Number 2: %d/%d\n",  localC,  localD );

  return 0;
} /* reportInput */
void additionOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  ){

  printf( "Addition of Fractions: %d/%d\n", (localA * localD + localC * localB), (localB * localD) );

} /* additionOfFractions */
void subtractionOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  ){

  printf( "Subtraction of Fractions: %d/%d\n", (localA * localD - localC * localB), (localB * localD) );

} /* subtractionOfFractions */
void multiplicationOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  ){

  printf( "Multiplication of Fractions: %d/%d\n", (localA * localC), (localB * localD) );

} /* multiplicationOfFractions */
void divisionOfFractions(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  ){

  printf( "Division of Fractions: %d/%d\n", (a * d), (b * c) );

} /* divisionOfFractions */
void decimalApproxOfFraction(
  int    localA,
  int    localB,
  float  localFloat
  ){

  localFloat = ( (float) localA / (float) localB );
  printf( "Decimal Approximation of Fraction 1: %.2f\n", localFloat );



} /* decimalApproxOfFraction1 */
void enterGPAofClass(
  int  localA,
  int  localB,
  int  localC,
  int  localD
  ){}
void gradeReport(
  int  localA,
  int  localB,
  int  localC,
  int  localD
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
