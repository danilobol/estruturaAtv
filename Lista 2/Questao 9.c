/*
9) Qual o resultado do c�digo abaixo? Explique cada linha.*/

int x = 100, *p, **pp; //Declara��o da vari�vel x, declara��o do ponteiro p e do ponteiro para ponteiro pp
p = &x; // ponteiro p aponta para vari�vel x
pp = &p; // e o ponteiro para ponteiro aponta para p que aponta para x
printf(�Valor de pp: %d\n�, **pp); //imprime o valor de x que � 100
