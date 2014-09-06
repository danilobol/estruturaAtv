#include <stdio.h>
#include <stdlib.h>

int main (){
    
    void repe();
    
    repe();
    
    
    system ("pause");
    return 0;
}

void repe(){
     
     int i, j, n;
     
     printf ("Quantos inteiros voce quer?: ");
     scanf ("%d",&n);
     int vetor[n];
     int vet[n];
     
     for (i=0;i<n;++i){
         vet[i] = 1;
     }
         
     
     for (i=0;i<n;++i){
         scanf ("%i",&vetor[i]);
     }
     for (i=0;i<n-1;++i){
         for (j=i+1;j<n;++j){
             if (vetor[i] == vetor[j]){
                          ++vet[i];
             }
         }
     }

     for (i=0;i<n-1;++i){
         for (j=i+1;j<n;++j){
             if (vet[i] < vet[j]){
                        vet[i] = 0;
             }
             else if (vet[j] < vet[i]){
                  vet[j] = 0;
             }
         }
     }


     for (i=0;i<n;++i){
         if (vet[i] != 0){
                    printf("O numero %d ocorreu %d vezes \n", vetor[i], vet[i]);
         }
     }
}
