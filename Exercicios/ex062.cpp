/*
Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, n;
    float vet[1000], menor, maior;
    printf("Diga a quantidade de numeros que voce vai digitar:");
    scanf("%i", &n);
    
    for(i=0; i<n; i++){
        printf("Diga um numero:");
        scanf("%f", &vet[i]);
    }

      maior = vet[0];
    for (i = 1; i < n; i++){
        if(vet[i] > maior){
          maior = vet[i];
        }
    }
    menor = vet[0];
    for (i = 1; i < n; i++){
        if(vet[i] <  menor){
          menor = vet[i];
        }
    }
    printf("Menor = %f", menor);
    printf("\nMaior = %f", maior);

}