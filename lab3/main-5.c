/******************************************************************************

                                Esercizio 5

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a = 100,b = 46,app = 0;
    
    while(b != 0){
        
        app = b;
        b = a % b;
        a = app;
        
    }//while
    
    printf("Risultato: %d",a);
    
    return 0;
    
}//main
