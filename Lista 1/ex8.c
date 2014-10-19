#include <stdio.h>

int main(void)
{
  int a, i, max, cont;
  
  void rep(int *p, int a, int *max, int *cont);
  
  printf("Digite quantos elementos tem seu vetor?:\n");
  scanf("%i",&a);
  int p[a];
  printf("Digite os elementos:\n");
  for (i=0; i<a; i++)
    {
      scanf("%i", &p[i]);
    }
    
  rep(p, a, &max, &cont);
  
  printf("O maximo e: %i\n", max);
  
  printf("O maximo ocorre: %i\n", cont);
  
  return 0;
}

void rep(int *p, int a, int *max, int *cont)
{
    cont = 0;
    int i, j, aux;
    for(i=0; i < a; i++)
    {
        for(j= i + 1; j < a; j++)
        {
            if(p[i] < p[j])
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
    *max = p[0];
    
    for (i=0; i < a; i++)
    {
        if (p[i] == *max)
          *cont++;
      
    }
    
}
