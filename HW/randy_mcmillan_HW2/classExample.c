/*
 *   Randy McMillan
 *   U8173-5382
 *   Class Example
 *   COP 3514
 */
#include <stdio.h> /*preprocessor directive*/
/*Declare some variables and pointers*/

char  ch = 'm';
char  i = 'a';


/*Declare some functions*/
void myMain();
/*
 *  Entry Point
 */
int main()
{
  myMain();
  return 0;
}   /* main */
/*
 *  myMain is where things really start
 */
void myMain()
{
   printf(  "LINE 29\n");
   printf(  "%s\n",  &ch);
   printf(  "LINE 31\n");
   printf(  "%c\n",  ch);
   printf(  "LINE 33\n");
  putchar( ch);
  printf( "LINE \n35\n");
  putchar( i);

  if ('a' <= ch && ch <= 'z')
    ch = ch - 'm' + 'M';

   printf(  "%s\n",  &ch);
   printf(  "%c\n",  ch);
   putchar(  ch);
   putchar(  i);

}   /* myMain */
