#include <stdio.h>

int main(void){
	int MinMax (int min, int max);
	
	int i, min, max;
	
	MinMax (min, max);
	
	int vet[max];
	
	for (i=min;i<max;i++){
		scanf("%d",&vet[i]);
		
	}
	for (i=min;i<max;i++){
		printf("%d",vet[i]);
		
	}
	
	return 0;
	
}
int MinMax (int min, int max){
	scanf("%d %d",&min, &max);
	
	return (min);
}
