/******************************************************************************

                                Esercizio 5

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    
    char frase[100],c,trovato=0;
    
    printf("Inserisci la frase: ");
    fgets(frase,100,stdin);
    printf("Inserisci carattere: ");
    c = getchar();
    
    for(int i = 0; i < strlen(frase); i++){
       
      if(frase[i] == c)
        trovato = 1;
        
    }//for


    if(trovato == 1)
        printf("C'è il carattere!!");
        
    else
        printf("Non c'è!!");

    return 0;
    
}//main