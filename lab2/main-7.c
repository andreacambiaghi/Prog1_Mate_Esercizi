/******************************************************************************

                                Esercizio 7

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    double a,b,ris;
    int op;
    
    printf("\nInserisci due numeri ");
    scanf("%lf %lf",&a,&b);


    do{
        printf("\n0)Esci - 1) Somma - 2) Differenza - 3) Prodotto - 4) Rapporto\n");
        scanf("%d",&op);
    
        if(op == 0)
            printf("Ciao Ciao!!");
        
        else if(op == 1)
            ris = a + b;
        
        else if(op == 2)
            ris = a - b;
        
        else if(op == 3)
            ris = a * b;
        
        else if(op == 4){
            
            ris = a / b;
            
            if(b == 0) {
                
                printf("Stai cercando di dividere per 0? e io ti caccio");
                return 0;
                
            }//if
            
        }//else if
        
        else{
            
            printf("Scelta non trovata");
            return 0;
            
        }//else
        
    }while(op != 0);

    return 0;
    
}//main
