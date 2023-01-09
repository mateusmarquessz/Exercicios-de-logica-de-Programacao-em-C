/*
Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, num, fatorial = 1;
    printf("Digite um numero para o calculoc fatorial!");
    scanf("%i", &num);

    for(i=num; i >= 1; i--){
        fatorial *= i;
    }
    printf("O fatorial de %i e %i", num, fatorial);
}