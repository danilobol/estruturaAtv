/* 2� Os programas (trechos de c�digo) abaixo possuem erros? Qual(is)? Como
deveriam ser? Comente ?
a)
void main() {
int x, *p;
x = 100;
p = x;
printf(�Valor de p: %d.\n�, *p);
}

RESPOSTA: O programa da erro, pois onde tem p=x temos que p aponta para uma vari�vel e n�o para o conte�do do endere�o dela.

void main() {
int x, *p;
x = 100;
p = &x;
printf(�Valor de p: %d.\n�, *p);
}

------------xxxx-------------------------xxxx--------------------xxxx

b)
void troca (int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
}

RESPOSTA: Foi usado de forma errada, para apontar o ponteiro n�o precisa usar o *, teria que fazer assim:

void troca (int &i, int &j) {
	int temp;
	temp = i;
	i = j;
	j = temp;
}

--------------xxxx---------------------------xxxxxx---------------xxxxx

c)
char *a, *b;
a = "abacate";
b = "uva";
if (a < b)
printf ("%s vem antes de %s no dicion�rio", a, b);
else
printf ("%s vem depois de %s no dicion�rio", a, b);

RESPOSTA: O programa poderia organizar as letras em ordem alfab�tica para depois comparar, usando a fun��o strcmp(a,b) presente na biblioteca stdio.h podemos fazer isso.

int main(){
	char *a, *b;
	a = "abacate";
	b = "uva";
	strcmp(a,b);
	if (a < b){
		printf ("%s vem antes de %s no dicionario", a, b);
	}
	else{
		printf ("%s vem depois de %s no dicionario", a, b);
	}
}
