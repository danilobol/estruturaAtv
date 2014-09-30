/*10) Escreva uma função que recebe uma string de caracteres e uma letra e
devolve um vetor de inteiros contendo as posições (índices no vetor da
string) onde a letra foi encontrada e um inteiro contendo o tamanho do vetor
criado (total de letras iguais encontradas). Utilize o retorno de um vetor para
retornar os índices e um ponteiro para guardar o tamanho do vetor.*/

#include <stdio.h>

int *buscaCaracters(char *str, char c, int *pn) {
    int i = 0, n = 0, *indices = 0;
    for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == c)
       n++;
