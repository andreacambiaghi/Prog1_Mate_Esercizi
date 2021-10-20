/******************************************************************************

                                Esercizio 7

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a,b,app = 0;
    
    printf("Inserisci a e b maggiori di 0 ");
    scanf("%d %d",&a,&b);
    
   if(a != 0 || b != 0){
       
       printf("Input non appropriati");
       return -1;
       
   }//if
    
    while(b != 0){
        
        app = b;
        b = a % b;
        a = app;
        
    }//while
    
    printf("Risultato: %d",a);
    
    return 0;
    
}//main
