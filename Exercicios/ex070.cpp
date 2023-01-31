/*
Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int eleitores){

    //criando um ponteiro auxiliar
    int *aux;
    //alocacao dinamica de memoria, malloc, sizeof pega o tamanho da memoria no caso de int
    aux = (int*) malloc(eleitores * sizeof(int));
    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}

int main(){
    int i, eleitores, cand1,cand2,cand3, *vet;

    printf("Qual o numero total de eleitores");
    scanf("%i", &eleitores);
    
    //alocando espaco na memoria para o vet
    vet = alocaVetor(eleitores);

    //contando votos
    for ( i = 0; i < eleitores; i++){
        printf("Diga qual candidato ira votar sendo [1] para o candidato 1, [2] para o candidato 2, [3] para o candidato 3 \n");
        scanf("%i", &vet[i]);
    }
cand1 = 0;
cand2 = 0;
cand3 = 0;
    for (i = 0; i < eleitores; i++){
        if(vet[i] == 1){
          cand1 ++;  
        } else if (vet[i] == 2){
            cand2 ++;
        } else {
            cand3 ++;
        }
    }
    
    printf("Quantidade de votos do Candidato1: %i\n", cand1);
    printf("Quantidade de votos do Candidato2: %i\n", cand2);
    printf("Quantidade de votos do Candidato3: %i\n", cand3);
}