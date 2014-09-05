#include <stdio.h>
#include <stdlib.h>

float n1, n2, m1, m2;

int main (void){
    
    void exibe_dados ();
    float le_notas ();
    float calc_media (float x, float r);
    
    le_notas ();
    
    calc_media (m1, m2);
    
    exibe_dados();

    system ("pause");
    return 0;
}
float le_notas (){
      
      scanf ("%f",&n1);
      scanf ("%f",&n2);

}  

float calc_media (float x, float r){
      
      m1 = (n1 + n2) / 2;
      m2 = (n1 + (n2 * 2)) / 3;
      
      return 1;
     
}
void exibe_dados (void){
     
          
     printf ("A média normal eh %.2f\nA media ponderada eh %.2f\n", m1, m2);
     
}  
