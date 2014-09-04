#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int trocaValores(int &x, int &z);
    int x, z;
    
    scanf ("%d",&x);
    scanf ("%d",&z);
    
    trocaValores(x, z);
    
    printf("\n%d \n%d\n",x,z);
    system ("Pause");
    return 0;
}

int trocaValores(int &x, int &z){
    
    if (x > z){
          return x, z;
    }
    else{
         int aux = x;
         x = z;
         z = aux;
         return x, z;
    }
}
