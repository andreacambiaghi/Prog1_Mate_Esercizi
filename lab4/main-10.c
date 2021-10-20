/******************************************************************************

                                Esercizio 10

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    
    double somma = 0,media,varianza,scarto;
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
    
    somma = 0;
    
    printf("Media: %g",media);
    
    for(int i = 0; i < sizeof(numeri)/sizeof(double); i++){
    
        somma += pow((numeri[i]-media),2);
        
    }//for
    
    varianza = somma / dim;
    
    printf("\nVarianza: %g",varianza);
    
    scarto = sqrt(varianza);
    
    printf("\nScarto: %g",scarto);


    return 0;
    
}//main