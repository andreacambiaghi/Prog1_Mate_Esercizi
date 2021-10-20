/******************************************************************************

                                Esercizio 8

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a,b,app = 0,conta = 0;
    
    printf("Inserisci a e b maggiori di 0 ");
    scanf("%d %d",&a,&b);
    
    while(a == 0 || b == 0){
        
        if(a == 0){
            
            printf("a deve essere >0");
            scanf("%d",&a);
            
        }//if
        
        if(b == 0){
            
            printf("b deve essere >0");
            scanf("%d",&b);
            
        }//if
        
        
    }//while
    
    while(b != 0){
        
        app = b;
        b = a % b;
        a = app;
        conta += 1;
        
    }//while
    
    printf("Risultato: %d con %d iterazioni",a,conta);
    
    return 0;
    
}//main
