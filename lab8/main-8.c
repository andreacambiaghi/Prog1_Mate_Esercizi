/******************************************************************************

                                Esercizio 8

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void ordina(char**, int);
int strlung(char *);

int main(int argc, char *argv[]){

  char *array[5];

  if(argc != 6){

    printf("Mancano degli argomenti\n");
    return -1;

  }//if

  for (size_t i = 0; i < 5; i++){

    array[i] = argv[i+1];
    printf("%s\n", array[i]);

  }//for

  ordina(array,5);

  for (size_t i = 0 ; i < 5 ; i++){

    printf("\n%s\n", array[i]);

  }//for

  return 0;

}//main

void ordina(char **s, int lung){

    char *temp;

    for(size_t i = 0 ; i < lung ; i++ ){

      for(size_t j = 0 ; j < lung-1 ; j++){

          if(strlung(s[j]) > strlung(s[j+1])){

                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;

          }//if

      }//for

    }//for

}//ordina

int strlung(char *s){

    int lung = 0;

    while(s[lung] != '\0')
        lung += 1;

    return lung;

}//strlung
