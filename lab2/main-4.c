/******************************************************************************

                                Esercizio 4

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a,b,conta = 0;
    
    printf("Inserisci i due numeri ");
    scanf("%d %d",&a,&b);
    
    printf("MCD tra %d %d è ",a,b);
    
    if(a < 0 || b < 0){
      
      printf("IMMESSI NUMERI NEGATIVI!!! AGAUGAAG");
      return -1;
        
    }//if
    
    while (a != b){
        
        if(a > b) a -= b;
        
        else b -= a;
        
        conta++;
        
    }//while
    
    printf("%d con un totale di %d iterazioni",a,conta);

    return 0;
    
}//main
