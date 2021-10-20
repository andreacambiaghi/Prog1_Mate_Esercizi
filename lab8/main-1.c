/******************************************************************************

                            Esercizio 1

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define n 100

int main(int argc, char *argv[]){

  FILE *file;
  char str[n];

  if((file = fopen("main-1.c","r")) == NULL){

    printf("Non posso aprire il file");
    return -1;

  }//if

  while (fgets(str,n,file) != NULL)
    printf("%s \n",str);

  fclose(file);

  return 0;

}//int main
