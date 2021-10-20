/******************************************************************************

                                Esercizio 11

*******************************************************************************/

#include <stdio.h>
#include <float.h>

int main(void) {
    
    double n1,n2;

    printf("Inserisci 2 numeri interi ");
    scanf("%lf %lf",&n1,&n2);
    
    printf("Somma: %d, Differenza: %d, Prodotto: %d, Rapporto Intero: %d, Resto: %d ",n1+n2,n1-n2,n1*n2,n1/n2,n1%n2);
    
    // % lavora solo con interi!!
    
    return 0;
    
}//main
