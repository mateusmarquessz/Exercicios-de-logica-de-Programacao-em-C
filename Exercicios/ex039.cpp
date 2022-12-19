/*
Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão).
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    int valor;
    printf("Diga um valor para saber se e impar ou par");
    scanf("%i", &valor);
    if(valor % 2 == 0){
        printf("Valor Par");
    } else {
        printf("Valor impar");
    }
}