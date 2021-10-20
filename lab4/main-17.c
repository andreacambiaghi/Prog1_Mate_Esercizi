/******************************************************************************

                                Esercizio 17

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    
    char parola[100],c;
    double freq,conta = 0;

    printf("Inserisci parola ");
    
    fgets(parola,100,stdin);
    
    do{
        
        conta = 0;
    
        printf("\nInserisci carattere ");
        c = getchar();
        getchar();
            
        if(c != '\n'){
                
            for(int i = 0 ; i < strlen(parola) ; i++){
                
                if(parola[i] == c)
                    conta += 1;
                
            }//for
            
            freq = (conta / strlen(parola));
        
            printf("Frequenza %c: %g",c,freq);
        
        }//if
        
        else
            return 0;
        
    }while(1);

    return 0;
    
}//main