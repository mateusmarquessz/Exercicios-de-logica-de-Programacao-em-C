/*
Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    float nota;
    printf("Digite uma Nota de 0 a 10:");
    scanf("%f", &nota);
    while(nota > 10.00 || nota < 0.0){
        printf("Valor invalido \n Digite uma nota de 0 a 10: ");
        scanf("%f", &nota);
    }
    return 0;
}