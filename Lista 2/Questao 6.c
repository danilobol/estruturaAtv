/*6) Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. Sua assinatura deve ser: void troca(float *a, float *b);*/

#include <stdio.h>

int main(){
	
	float *a, *b, x, y;
	void troca(float *a, float *b);
	
	scanf ("%f %f",&x,&y);
	
	a = &x;
	b = &y;
	
	troca(a, b);
	
	printf ("%f %f",*a,*b);
	
	return 0;	
	
}

void troca(float *a, float *b)
{

    float temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
