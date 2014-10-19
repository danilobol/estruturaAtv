#include <stdio.h>

int main(void){
    
    void mudarValor (int *A, int *B);
    int a, b;
    scanf ("%d %d",&a, &b);
    
    mudarValor(&a, &b);
    system ("pause");
    return 0;
}
void mudarValor (int *A, int *B){
     *A = *A + *B;
     printf ("%d %d\n", *A, *B);
}
    
