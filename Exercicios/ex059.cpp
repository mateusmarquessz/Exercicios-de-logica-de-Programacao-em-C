/*
Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, x, pares = 0, impares= 0 ;
    for(i=1; i< 11; i++){
        printf("Digite um numero inteiro!");
        scanf("%i", &x);
     if ((x % 2) == 0)
            pares++;
        else
            impares++;
    }
    printf("Pares: %d\nImpares: %d", pares, impares);
    }