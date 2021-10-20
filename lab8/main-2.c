/******************************************************************************

                            Esercizio 2

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define n 100

int main(int argc, char *argv[]){

  FILE *file;
  char str[n];

  if((file = fopen(argv[1],"r")) == NULL || (argc !=2)){

    printf("Non posso aprire il file");
    return -1;

  }//if

  else{

    while (fgets(str,n,file) != NULL) {

      printf("%s \n",str);

    }//while

  }//else

  fclose(file);

  return 0;

}//int main
