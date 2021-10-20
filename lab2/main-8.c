/******************************************************************************

                                Esercizio 8

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    double a,b,ris;
    int op;
    
    printf("\nInserisci due numeri ");
    scanf("%lf %lf",&a,&b);


    do{
        printf("0)Esci - 1) Somma - 2) Differenza - 3) Prodotto - 4) Rapporto\n");
        scanf("%d",&op);
        
        if(op == 0){
            
            printf("ciao ciao!!");
            
        }//if
        
        else if(op == 1){
            
            ris = a + b;
            printf("Risultato: %g",ris);
            
        }//if

        
        else if(op == 2){
            
            ris = a - b;
            printf("Risultato: %g",ris);
            
        }//if

        
        else if(op == 3){
            
            ris = a * b;
            printf("Risultato: %g",ris);
            
        }//if

        
        else if(op == 4){
            
             if(b == 0) {
                 
                   printf("Stai cercando di dividere per 0? e io ti caccio");
                 
               }else{
                   
                ris = a / b;
                   printf("Risultato: %g",ris);
                   
               }//else
            
        }//if
        
        else{
            
            printf("Scelta non trovata");
            
        }//else

    }while(op != 0);

    return 0;
    
}//main
