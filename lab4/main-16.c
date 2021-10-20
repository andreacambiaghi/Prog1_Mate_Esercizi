/******************************************************************************

                                Esercizio 16

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    
    char parola[100],c;
    double freq,conta = 0;

    printf("Inserisci parola ");
    
    fgets(parola,100,stdin);
    
    printf("Inserisci carattere ");
    c = getchar();
    getchar();
        
    for(int i = 0 ; i < strlen(parola) ; i++){
        
        if(parola[i] == c)
            conta += 1;
        
    }//for
    
    freq = (conta / strlen(parola));

    printf("Frequenza: %g",freq);

    return 0;
    
}//main