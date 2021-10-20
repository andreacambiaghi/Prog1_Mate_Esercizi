/******************************************************************************

                                Esercizio 8

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    double numeri[5],somma = 0,media;
    
    for(int i = 0; i < sizeof(numeri)/sizeof(double); i++){
    
        printf("Inserisci %d° numero ",(i+1));
        scanf("%lf",&numeri[i]);
        somma += numeri[i];
        
    }//for
    
    media = somma / 5;
    
    printf("Media: %g",media);

    return 0;
    
}//main