/******************************************************************************

                                Esercizio 9

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    double somma = 0,media;
    int dim;
    
    printf("Inserisci dimensione vettore: ");
    scanf("%d",&dim);
    
    double numeri[dim];
    
    for(int i = 0; i < sizeof(numeri)/sizeof(double); i++){
    
        printf("Inserisci %d° numero ",(i+1));
        scanf("%lf",&numeri[i]);
        somma += numeri[i];
    
    }//for
    
    media = somma / dim;
    
    printf("Media: %g",media);

    return 0;
    
}//main
