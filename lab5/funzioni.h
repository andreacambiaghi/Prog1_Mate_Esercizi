#include <stdio.h>
#include <stdlib.h>

void inizializza(int n, int mat[][n], int m){
    
    for(int i = 0 ; i < n ; i++) {
        
        for(int j = 0 ; j < n; j++) {
            
            mat[i][j] = m;
            
        }//for j
                
    }//for i
    
}//inizializza

void copia(int n, int mat1[][n], int mat2[][n]){
    
    for(int i = 0 ; i < n ; i++) {
        
        for(int j = 0 ; j < n; j++) {
            
            mat2[i][j] = mat1[i][j];
            
        }//for j
                
    }//for i
    
}//copia

void riempi(int n,int mat[][n]){
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
            
            printf("Inserisci elemento %dx%d ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
            
        }//for j
        
    }//for i
    
}//riempi

void stampa(int n, int mat[][n]){
    
    for(int i = 0 ; i < n ; i++){
        
        printf("|\t");
        
        for(int j = 0 ; j < n ; j++){
            
            printf("%d\t",mat[i][j]);
            
        }//for j
        
        printf("|\n");
        
    }//for i
    
}//stampa

void trasposta(int n,int mat[][n],int tras[][n]){
    
    for(int i = 0 ; i < n ; i++){
                
        for(int j = 0 ; j < n ; j++){
            
            tras[i][j] = mat[j][i];
            
        }//for j
                
    }//for i
    
}//trasposta

void somma(int n,int mat1[][n],int mat2[][n],int ris[][n]){
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
            
            ris[i][j] = mat1[i][j] + mat2[i][j];
            
        }//for j
        
    }//for i
    
}//somma

void scalare(int n, int mat[][n], int ris[][n],double scalare){
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
            
            ris[i][j] = scalare * mat[i][j];
            
        }//for j
        
    }//for i
    
}//scalare

void prodotto(int n, int mat1[][n], int mat2[][n], int ris[][n]){
        
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
            
            ris[i][j] = 0;
                        
            for (int k = 0 ; k < n ; k++){
            
                ris[i][j] += mat1[i][k] * mat2[k][j];
                
            }//for k
            
        }//for j
        
    }//for i
        
}//prodotto

void scambia(int n, int mat1[][n], int mat2[][n], int aux[][n]){
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
            
            aux[i][j] = mat1[i][j];
            mat1[i][j] = mat2[i][j];
            mat2[i][j] = aux[i][j];

        }//for j
        
    }//for i
    
}//scambia

void potenza(int n, int mat1[][n], int mat2[][n], int ris[][n]){
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
            
            ris[i][j] = 0;
                        
            for (int k = 0 ; k < n ; k++){
            
                ris[i][j] += mat1[i][k] * mat2[k][j];
                
            }//for k
            
        }//for j
        
    }//for i
    
    copia(n, ris, mat2);
        
}//potenza

void identita(int n, int mat[][n]){
    
    for(int i = 0 ; i < n ; i++){
        
        for(int j = 0 ; j < n ; j++){
                        
           if(i == j)
               mat[i][j] = 1;
            else
                mat[i][j] = 0;
            
        }//for j
        
    }//for i
    
}//identita

