/*
Faça um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor para em cada um.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


int* alocaVetor(int n){

    //criando um ponteiro auxiliar
    int *aux;
    //alocacao dinamica de memoria, malloc, sizeof pega o tamanho da memoria no caso de int
    aux = (int*) malloc(n * sizeof(int));
    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}

int main(){
    int i, n, soma, *vet;
    double media;

    printf("Digite a quantidade de CDs");
    scanf("%i", &n);

    vet = alocaVetor(n);

    for ( i = 0; i < n; i++){
        printf("Diga o valor do %i Cds", i+1);
        scanf("%f", &vet[i]);
    }

    media = 0;
    soma = 0;
    for (i = 0; i < n; i++){
        soma = soma + vet[i];
    }
    media = soma / n;

    printf("\nA media entre as turmas eh de %f", media);
    
}