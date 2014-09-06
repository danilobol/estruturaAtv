#include <stdio.h>
#include <stdlib.h>
int x;
int main(){
    
    int SomaDobro (int a, int b);
    int a, b;
    scanf ("%d %d",&a,&b);
    SomaDobro (a, b);
    
    printf ("A soma do dobro de A e B eh %d \n", x);
    system ("pause");
    return 0;
}
int SomaDobro (int a, int b){
    a = a * 2;
    b = b * 2;
    x = a + b;
    
    return x;
}
