/******************************************************************************

                                Esercizio 9

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int n,prec = 0,succ = 1,app;
    
    printf("Inserisci il numero n t.c. n sia il numero di numeri della serie di Fibonacci stampati \n");
    scanf("%d",&n);
    
    printf("%d ",succ);
    for (int i = 1; i < n; i++) {
        
        printf("%d ",prec+succ);
        
        app = succ;
        succ = prec + succ;
        prec = app;
        
    }//for
    
    return 0;
    
}//main