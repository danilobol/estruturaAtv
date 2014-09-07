#include <stdio.h>
#include <stdlib.h>

float f;
int main(){
    
    float fra(float num, int *inteiro, float *frac);
    float n;
    printf ("Digite um numero: ");
    scanf ("%f",&n);
    int *in;
    float *fr;
    fra(n, &in, &fr);
    printf ("A parte inteira é %d e a fracionada é %f\n", in, f);
    system ("pause");
}

float fra(float num, int *inteiro, float *frac){
        
    int i = (int)num;
    float x = (float)i;
    f = num - x;
    *inteiro = i;
    *frac = f;
    return i;
}
