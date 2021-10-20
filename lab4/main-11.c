/******************************************************************************

                                Esercizio 11

*******************************************************************************/
#include <stdio.h>
#define dim 5

int main(void) {
    
    int vettore[dim],app = 0;

    for(int i = 0 ; i < dim ; i++){
        
        printf("Inserisci %d numero ",(i+1));
        scanf("%d",&vettore[i]);
        
    }//for
    
    printf("vettore: ");
    
    for(int i = 0 ; i < dim ; i++){
        
        printf("%d - ",vettore[i]);    
        
    }//for
    
    for(int i = 0 ; i < dim ; i++ ){
      
      for(int j = 0 ; j < dim-1 ; j++){
          
          if(vettore[j] > vettore[j+1]){
              
              app = vettore[j];
              vettore[j] = vettore[j+1];
              vettore[j+1] = app;
              
          }//if
          
      }//for
      
    }//for
    
    printf("\nVettore ordinato: ");

    for(int i = 0 ; i < dim ; i++){
        
        printf(" %d - ",vettore[i]);    
        
    }//for
    
    return 0;
    
}//main
