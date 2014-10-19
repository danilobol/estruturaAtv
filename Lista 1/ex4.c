#include <stdio.h>


int main() {
	
	void le_notas(float *n1, float *n2);

	void calc_media(float *n1, float *n2, float *media, float *mediaP);

	void exibe_dados(float *n1, float *n2, float *media, float *mediaP);

	float n1, n2, media, mediaP;
	
	le_notas(&n1, &n2);
	
	calc_media(&n1, &n2, &media, &mediaP);
	
	exibe_dados(&n1, &n2, &media, &mediaP);
	
	return 0;
}

void le_notas(float *n1, float *n2) {
	scanf("%f %f", n1, n2);
}

void calc_media(float *n1, float *n2, float *media, float *mediaP) {
	*media = (*n1 + *n2) / 2;
	*mediaP = (*n1 + *n2 * 2) / 3;
}

void exibe_dados(float *n1, float *n2, float *media, float *mediaP) {
	printf("Media normal: %.2f\n", *media);
	printf("Media ponderada: %.2f\n", *mediaP);
}
