/******************************************************************************

                                Esercizio 6

*******************************************************************************/
#include <stdio.h>

void clean(char*, char*, char);

int main(void) {
    
    char sporca[BUFSIZ], pulita[BUFSIZ], car;
    
    printf("Inserisci frase da pulire ");
    
    if(fgets(sporca,BUFSIZ,stdin) == NULL)
        return -1;
    
    else
        printf("Parola Inserita %s\n",sporca);
        
    printf("Inserisci carattere da rimuovere ");
    car = getchar();
        
    clean(sporca, pulita, car);
    
    printf("\n%s", pulita);
    
    return 0;
    
}//main

void clean(char *s1, char *s2, char c){
    
    int j = 0;
    
    for(int i = 0 ; s1[i] != '\0' ; i++){
        
        if(s1[i] != c){
           
           s2[j] = s1[i];
           j++;
            
        }//if
        
    }//for
    
}//clean

