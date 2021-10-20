/******************************************************************************

                                Esercizio 2

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int equals(char*, char*);

int main(void) {
    
    char str1[BUFSIZ], str2[BUFSIZ];
    int ris;
    
    printf("Inserisci Parola 1: ");
    fgets(str1,BUFSIZ,stdin);
    
    printf("Inserisci Parola 2: ");
    fgets(str2,BUFSIZ,stdin);
    
    ris = equals(str1,str2);
    
    if(ris == 0)
        printf("Diverse");
    else
        printf("Uguali");
    
    return 0;
    
}//main

int equals(char *s, char *c){
    
   int bol = 1;
   
   for(int i = 0 ; i < strlen(s) ; i++){
       
       if(s[i] != c[i]){
           
         bol = 0;
           
       }//if
       
   }//for
   
   return bol;
   
}//equals
