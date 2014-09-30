/* 2­ Os programas (trechos de código) abaixo possuem erros? Qual(is)? Como
deveriam ser? Comente ?
a)
void main() {
int x, *p;
x = 100;
p = x;
printf(“Valor de p: %d.\n”, *p);
}

RESPOSTA: O programa da erro, pois onde tem p=x temos que p aponta para uma variável e não para o conteúdo do endereço dela.

void main() {
int x, *p;
x = 100;
p = &x;
printf(“Valor de p: %d.\n”, *p);
}

------------xxxx-------------------------xxxx--------------------xxxx

b)
void troca (int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
}

RESPOSTA: Foi usado de forma errada, para apontar o ponteiro não precisa usar o *, teria que fazer assim:

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
printf ("%s vem antes de %s no dicionário", a, b);
else
printf ("%s vem depois de %s no dicionário", a, b);

RESPOSTA: O programa poderia organizar as letras em ordem alfabética para depois comparar, usando a função strcmp(a,b) presente na biblioteca stdio.h podemos fazer isso.

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
