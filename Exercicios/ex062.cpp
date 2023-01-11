/*
Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    float n, soma, maior_numero = -INFINITY, nenor_numero = INFINITY, menor, maior;
    printf("Digite um numero qualquer ou 0 para parar e exibir os resultados:");
    scanf("%f", &n);
    soma = 0;

    while(n != 0){
        printf("Digite um numero qualquer ou 0 para parar e exibir os resultados:");
        scanf("%f", &n);
    }
    printf("Menor: %i, Maior: %i, Soma:%i",menor, maior, soma);
}