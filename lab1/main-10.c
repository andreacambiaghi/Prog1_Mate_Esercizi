/******************************************************************************

                                Esercizio 10

*******************************************************************************/

#include <stdio.h>
#include <float.h>

int main(void) {
    
    int n1,n2;

    printf("Inserisci 2 numeri interi ");
    scanf("%d %d",&n1,&n2);
    
    printf("Somma: %d, Differenza: %d, Prodotto: %d, Rapporto Intero: %d, Resto: %d ",n1+n2,n1-n2,n1*n2,n1/n2,n1%n2);
    
    return 0;
    
}//main
