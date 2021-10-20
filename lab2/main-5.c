/******************************************************************************

                                Esercizio 5

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    double a,b,ris;
    int op;
    printf("Inserisci due numeri ");
    scanf("%lf %lf",&a,&b);
    
    printf("1) Somma - 2) Differenza - 3) Prodotto - 4) Rapporto\n");
    scanf("%d",&op);
    
    if(op == 1)
        ris = a + b;
    
    else if(op == 2)
        ris = a - b;
    
    else if(op == 3)
        ris = a * b;
    
    else if(op == 4)
        ris = a / b;
    
    else
        return -1;

    printf("Risultato: %g",ris);
    
    return 0;
    
}//main
