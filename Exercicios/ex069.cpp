/*
Faça um programa que peça para n pessoas a sua idade, ao final o programa deverá verificar se a média de idade da turma varia entre 0 e 25, 26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int pessoas){

    //criando um ponteiro auxiliar
    int *aux;
    //alocacao dinamica de memoria, malloc, sizeof pega o tamanho da memoria no caso de int
    aux = (int*) malloc(pessoas * sizeof(int));
    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}

int main(){
    int i, pessoas, *vet, soma;
    double media;

    printf("Diga a quantidade de pessoas");
    scanf("%i", &pessoas);

    vet = alocaVetor(pessoas);

    for (i = 0; i < pessoas ; i++){
       printf("Diga a idade da pessoa %i: ", i + 1);
       scanf("%i", &vet[i]);
    }
    soma = 0;
     for(i=0; i<pessoas; i++){
        soma = soma + vet [i];
    }
    media = 0;
    media = soma / pessoas;
    
    if(media < 25){
        printf("Turma jovem");
    } else if(media > 25 && media < 60 ){
        printf("Turma adulta");
    } else {
        printf("Turma Idosa");
    }
    
    
}