#include <stdio.h>

int main(){
    
    int SomaDobro (int *a, int *b, int *x);
    int a, b, x;
    scanf ("%d %d",&a,&b);
    SomaDobro (&a, &b, &x);
    
    printf ("A soma do dobro de A e B eh %d \n", x);

    return 0;
}
int SomaDobro (int *a, int *b, int *x){
    *a = *a * 2;
    *b = *b * 2;
    *x = *a + *b;
    
    return *x;
}
