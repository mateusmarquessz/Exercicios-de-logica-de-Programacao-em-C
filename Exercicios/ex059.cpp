/*
Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, n;
    for(i=1; i< 11; i++){
        printf("Digite um numero inteiro!");
        scanf("%i", &n);
    }
    if(n % 2 == 0){
        printf ("Numeros pares: %i", n);
    } else {
        printf("Numeros impares: %i", n);
    }
}