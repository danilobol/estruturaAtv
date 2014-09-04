#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int trocaValores(int &x, int &y, int &z);
    int x, y, z;
    
    scanf ("%d",&x);
    scanf ("%d",&y);
    scanf ("%d",&z);
    
    trocaValores(x, y, z);
    
    printf("\n%d \n%d\n%d\n", x, y, z);
    system ("Pause");
    return 0;
}

int trocaValores(int &x, int &y, int &z){
    int i[3];
    int j, k, aux;
    i[0] = x;
    i[1] = y;
    i[2] = z;
    
    for(j=0;j<2;++j){
        for(k=1;k<=2;++k){
                if (i[j] > i[k]){
                         aux = i[j];
                         i[j] = i[k];
                         i[k] = aux;
                         
                }       
        }
    }
    x = i[0];
    y = i[1];
    z = i[2];
    
    if (x == y == z){
          return 1;
    }
    else{
         return 0;
    }
}
