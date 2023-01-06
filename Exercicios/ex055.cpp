/*
Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, num1, num2;
    printf("Digite um numero!");
        scanf("%i", &num1);
    printf("Digite outro numero!");
        scanf("%i", &num2);
    
    for(i=num1 + 1; i<num2; i++){
        printf("%i\n", i);
    }
}