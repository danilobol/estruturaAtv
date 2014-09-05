#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int trocaValores(int &a, int &b);
    int a, b;
    
    printf ("Digite o valor de A: ");
    scanf ("%i",&a);
    printf ("Digite o valor de B: ");
    scanf ("%i",&b);
    
    trocaValores(a, b);
    
    printf ("O Valor de A: %i \nO valor de B: %i\n",a,b);
    
    system ("pause");
    return 0;

}

int trocaValores(int &a, int &b){
    
    int aux;
    
    aux = a;
    a = b;
    b = aux;
    
    return a,b;
}
       
