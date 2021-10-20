/******************************************************************************

                                Esercizio 5

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverse(char*, char*);

int main(int argc, char *argv[]){

    char str[BUFSIZ], rts[BUFSIZ];

    if(argc != 2)
      printf("C'è qualcosa che non va\n");

    else{

      strcpy(str,argv[1]);

      reverse(str,rts);

      printf("Parola Al contrario: ");

      printf("%s",rts);

    }//else

    return 0;

}//main

void reverse(char *s, char *c){

    int i = 0;
    int j = strlen(s);

    while((c[i] = s[j-1]) != '\n'){

        i++;
        j--;

    }//while

}//reverse
