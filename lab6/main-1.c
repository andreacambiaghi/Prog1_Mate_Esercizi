/******************************************************************************

                                Esercizio 1

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverse(char*, char*);

int main(void) {

    char str[BUFSIZ], rts[BUFSIZ];

    printf("Inserisci Parola da invertire: ");

    fgets(str,BUFSIZ,stdin);

    reverse(str,rts);

    printf("Parola Al contrario: ");

    printf("%s",rts);

    return 0;

}//main

void reverse(char *s, char *c){

    int i = 0;
    int j = strlen(s)-1;

    while((c[i] = s[j-1]) != '\n'){

        i++;
        j--;

    }//while

}//reverse
