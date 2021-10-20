/******************************************************************************

                                Esercizio 6

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void clean(char*, char*, char*);

int main(int argc, char *argv[]){

    char sporca[BUFSIZ], pulita[BUFSIZ], car[BUFSIZ];

    if(argc != 3)
      printf("Manca qualcosa\n");

    else{

      strcpy(sporca,argv[1]);
      strcpy(car,argv[2]);

      clean(sporca, pulita, car);

      printf("\n%s", pulita);

    }//else

    return 0;

}//main

void clean(char *s1, char *s2, char* c){

    int k = 0, app;

    for(int i = 0 ; s1[i] != '\0' ; i++){

        app = 1;

        for(int j = 0 ; c[j] != '\0' ; j++){

            if(s1[i] == c[j]){

               app = 0;

            }//if

        }//for j

        if(app == 1)
            s2[k++] = s1[i];

    }//for i

}//clean
