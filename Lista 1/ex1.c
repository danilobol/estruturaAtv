#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int trocaValores(int *a, int *b); //chama a funÃ§Ã£o
    int a, b;
    
    printf ("Digite o valor de A: ");
    scanf ("%i",&a);
    printf ("Digite o valor de B: ");
    scanf ("%i",&b);
    
    trocaValores(&a, &b); // a funÃ§Ã£o recebe as variÃ¡veis
    
    printf ("O Valor de A: %i \nO valor de B: %i\n",a,b);
    
    return 0;
	system ("Pause");
}

int trocaValores(int *a, int *b){
    
    int aux;
    
    aux = *a; // troca os valores
    *a = *b;
    *b = aux;
    
    return a,b; // retorna os valorers trocados
}
       
