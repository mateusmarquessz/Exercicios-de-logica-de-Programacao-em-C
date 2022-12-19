/*
Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    float num;
    int aux;
    printf("Diga um numero!");
    scanf("%f", &num);
    aux = num;
    if(aux == num){
        printf("Valor inteiro");
    } else {
        printf("Valor decimal");
    }
}