/*
9) Qual o resultado do código abaixo? Explique cada linha.*/

int x = 100, *p, **pp; //Declaração da variável x, declaração do ponteiro p e do ponteiro para ponteiro pp
p = &x; // ponteiro p aponta para variável x
pp = &p; // e o ponteiro para ponteiro aponta para p que aponta para x
printf(“Valor de pp: %d\n”, **pp); //imprime o valor de x que é 100
