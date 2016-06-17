/*
 *
 * Randy McMillan
 *
 * U8173-5382
 *
 * Homework
 *
 * COP 3514
 *
 */
int main(
  int   argc,
  char  *argv[]
  ){

char *planets[] = { "Mercury", "VEuns", , , }

int i, j;

  for(i = 1; i < argc; i ++)
      {
      for(j = 0; j < NUM_PLANETS; j ++)
          {

          if( strcmp(argv[i], planet[j] == 0) ) {

             printf("%s is a planet %d\n", argv[i], j );

             }

          }


      }

} /* main */
