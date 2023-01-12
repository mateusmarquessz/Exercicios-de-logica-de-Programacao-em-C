/*
Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, n;
    float vet[1000];
    printf("Diga a quantidade de numeros que voce vai digitar:");
    scanf("%i", &n);

    for(i=0; i<n; n++){
        printf("Diga um numero:");
        scanf("%f", vet[i]);
    }
    
}