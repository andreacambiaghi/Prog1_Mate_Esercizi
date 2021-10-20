/******************************************************************************

                            Esercizio 8

*******************************************************************************/
#include <stdio.h>

int f(int);
int m(int);

int main(void) {
    

    int num = 0;
    
    do{
        
        if(num < 0)
            printf("DEVE ESSERE MAGGIORE O UGUALE A 0");
       
        printf("Inserisci un numero >= 0 ");
        scanf("%d",&num);
    
    }while(num < 0);
    
    printf("n\tf(n)\nm(n)\n");
    
    for(int i = 0 ; i <= num ; i++){
        
        printf("%d\t%d\t%d\n",i,f(i),m(i));
        
    }//for

    return 0;
    
}//main

int f(int n){
    
    if(n == 0)
        return 1;
        
    else
        return (n - m(f(n - 1)));
    
}//f

int m(int n){
    
    if(n == 0)
        return 0;
        
    else
        return (n - f(m(n - 1)));
    
}//m
