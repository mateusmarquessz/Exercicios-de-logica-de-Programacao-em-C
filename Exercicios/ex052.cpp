/*
Faça um programa que leia 5 números e informe o maior número.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i;
    float num1, maior_numero = -INFINITY;
    for(i=1; i<6; i++){
        printf("Digite um numero");
        scanf("%f", &num1);
        if(num1 > maior_numero){
            maior_numero = num1;
        }
    }
    printf("\n%f", maior_numero);
}