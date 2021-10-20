/******************************************************************************

                                Esercizio 4

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int lex(char*, char*);

int main(void) {

    char str1[BUFSIZ], str2[BUFSIZ];

    printf("Inserisci prima parola ");

    if(fgets(str1,BUFSIZ,stdin) == NULL)
        return -1;

    else
        printf("Parola Inserita %s\n",str1);

    printf("Inserisci seconda parola ");

    if(fgets(str2,BUFSIZ,stdin) == NULL)
        return -1;

    else
        printf("Parola Inserita %s\n",str2);

    int less = lex(str1,str2);

    if(less < 0)
        printf("Vince %s",str1);

    else if(less > 0)
            printf("Vince %s",str2);

    else
        printf("Sono uguali");

    return 0;

}//main

int lex(char *s1, char *s2){

    for(int i = 0; s1[i] != '\0' && s2[i] != '\0' ; i++){

      printf("%d %d\n", s1[i], s2[i]);

        if(s1[i] > s2[i]){
            return 1;

        if(s1[i] < s2[i]){
           return -1;

    }//for

    return 0;

}//lex
