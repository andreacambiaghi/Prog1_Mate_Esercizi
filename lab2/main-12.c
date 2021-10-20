/******************************************************************************

                                Esercizio 12

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char c;
    int scelta;
    
    printf("Inserici carattere da convertire ");
    c = getchar();
    
    if(isdigit(c) != 0){
       
        printf("Non un numero daiii");
        return 0;
        
    }//if
    
    else{
        
        printf("\n1) Maiuscolo - 2) Minuscolo ");
        scanf("%d",&scelta);
        
        if(scelta == 1) {
            
            if(islower(c) != 0)
                c -= 32;
            else
                printf("Già Maiuscolo");
                
        }//if
            
        if(scelta == 2){
            
            if(isupper(c) != 0)
                c += 32;
            else
                printf("Già Minuscolo");
            
        }//if
        
    }//else
    
    printf("\nNuovo carattere %c",c);
    
    return 0;
    
}//main
