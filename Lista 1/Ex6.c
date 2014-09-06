#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float a,b,c,s1,s2;
  int solu;
  
  int raizes(float a, float b, float c, float *x1, float *x2);

  ponto:
  printf("Digite a, b e c\n");
  scanf("%f %f %f", &a, &b, &c);
  
  if ( a == 0 ) {
    printf("\"a\" nao pode ser 0\n");
    goto ponto;
  }

  solu = raizes(a,b,c,&s1,&s2);

  if ( solu == 0 ) {
    printf("A equacao nao possui raizes reais.\n");
  }
  else{
       if (s1 == s2) {
              printf("Solucao: %.2f\n", s1);
              }
       else {
            printf("Solucao: %.2f e %.2f\n", s1, s2);
            }
  }

  system ("pause");
  return(0);
}

int raizes(float a, float b, float c, float *x1, float *x2){
    
    int delta;
    delta = (b*b) - 4*a * c;
    if ( delta < 0 ){
         return 0;
    }
    else{
         *x1 = (-b + sqrt(delta))/(2*a);
         *x2 = (-b - sqrt(delta))/(2*a);
         return 1;
    }
}
