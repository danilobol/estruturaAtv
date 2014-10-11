#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int trocaValores(int *x, int *z); // chama a funÃ§Ã£o
    int x, z;
    
    scanf ("%d",&x);
    scanf ("%d",&z);
    
    trocaValores(&x, &z); //funÃ§ao recebe as variÃ¡veis
    
    printf("\n%d \n%d\n",x,z);
    system ("Pause");
    return 0;
}

int trocaValores(int *x, int *z){
    
    if (*x > *z){ // se o 1 Ã© maior que o 2 
          return *x, *z; // retorna a mesma orde
    }
    else{ // se nao for
         int aux = *x; // inverte a ordem
         *x = *z;
         *z = aux;
         return *x, *z;
    }
}
