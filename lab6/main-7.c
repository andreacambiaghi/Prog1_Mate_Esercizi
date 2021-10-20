  /******************************************************************************

                                Esercizio 7

*******************************************************************************/
#include <stdio.h>

void clean(char*, char*, char*);

int main(void) {

    char sporca[BUFSIZ], pulita[BUFSIZ], car[BUFSIZ];

    printf("Inserisci frase da pulire ");

    if(fgets(sporca,BUFSIZ,stdin) == NULL)
        return -1;

    else
        printf("Parola Inserita %s\n",sporca);

    printf("Inserisci caratteri da rimuovere ");
    if(fgets(car,BUFSIZ,stdin) == NULL)
        return -1;


    clean(sporca, pulita, car);

    printf("\n%s", pulita);

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
