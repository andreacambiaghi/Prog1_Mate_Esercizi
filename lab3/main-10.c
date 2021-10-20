/******************************************************************************

                                Esercizio 10

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int n = 4,a,b,app = 0,conta = 0,prec = 0,succ = 1;
    
    printf("Inserisci n ");
    scanf("%d",&n);
    
    for (int i = 1; i < n+2; i++) {
        
        printf("%d ",prec+succ);
        
        app = succ;
        succ = prec + succ;
        prec = app;
        
    }//for
    
    a = succ;
    b = prec;
    
    while(b != 0){
        
        app = b;
        b = a % b;
        a = app;
        conta += 1;
        
    }//while
    
    printf("\n n: %d \niterazioni: %d",n,conta);

    return 0;
    
}//main
