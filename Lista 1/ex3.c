#include <stdio.h>


int main() {
	int a, b, c;
	
	int ordenar(int *a, int *b, int *c);
	
	int ordenar(int *a, int *b, int *c);
	
	scanf("%d %d %d", &a, &b, &c);
	
	ordenar(&a, &b, &c);
	
	printf ("%d %d %d",a,b,c);
	
	return 0;
}

int ordenar(int *a, int *b, int *c) {
	if((*a == *b) & (*a == *c))
		return 1;

	if(*a > *b) {
		*a += *b;
		*b = *a - *b;
		*a -= *b;
	}
	if(*b > *c) {
		*b += *c;
		*c = *b - *c;
		*b -= *c;
		
		if(*a > *b) {
			*a += *b;
			*b = *a - *b;
			*a -= *b;
		}
	}
	
	return 0;
}
