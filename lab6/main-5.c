/******************************************************************************

                                Esercizio 5

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void clean(char*, char*);

int main(void) {
    
    char sporca[BUFSIZ], pulita[BUFSIZ];
    
    printf("Inserisci frase da pulire ");
    
    if(fgets(sporca,BUFSIZ,stdin) == NULL)
        return -1;
    
    else
        printf("Parola Inserita %s\n",sporca);
        
    clean(sporca, pulita);
    
    printf("\n%s", pulita);
    
    return 0;
    
}//main

void clean(char *s1, char *s2){
    
    int j = 0;
    
    for(int i = 0 ; s1[i] != '\0' ; i++){
        
        if(s1[i] != ' '){
           
           s2[j] = s1[i];
           j++;
            
        }//if
        
    }//for
    
}//clean

