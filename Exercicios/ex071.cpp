/*
Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int turmas){

    //criando um ponteiro auxiliar
    int *aux;
    //alocacao dinamica de memoria, malloc, sizeof pega o tamanho da memoria no caso de int
    aux = (int*) malloc(turmas * sizeof(int));
    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}

int main(){
    int i, *vet, turmas, alunos, soma;
    double media;

    printf("Digite a quantidade de turmas");
    scanf("%i", &turmas);

        //alocando espaco na memoria para o vet
    vet = alocaVetor(turmas);

    for (i = 0; i < turmas; i++){

        printf("Quantidade de alunos por turma\n");
        scanf("%i", &vet[i]);
        if(vet[i] > 40){
            printf("Nao pode 40 alunos numa turma\n");
        }
    }
    media = 0;
    soma = 0;
    for (i = 0; i < turmas; i++){
        soma = soma + vet[i];
    }
    media = soma / turmas;

    printf("\nA media entre as turmas eh de %f", media);
}
