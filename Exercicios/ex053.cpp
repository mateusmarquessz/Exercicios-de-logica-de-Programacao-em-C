/*
Faça um programa que leia 5 números e informe a soma e a média dos número
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i;
    float num1, soma, media;
    for(i=1; i<6; i++){
        printf("Digite um numero");
        scanf("%f", &num1);
    soma += num1;
    media = soma / 5;
    }
    printf("\nSoma:%f", soma);
    printf("\nMedia:%f", media);
}