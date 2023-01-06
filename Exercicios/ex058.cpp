/*
Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
     int i,expoente;
     float base,numero;
     numero = 1;
    printf("Digite o numero da base!");
        scanf("%f", &base);
    printf("Digite o numero do expoente!");
        scanf("%i", &expoente);
        for(i=1; i <= expoente; i++){
            numero *= base;
        }
    printf("%f elevado a %d e = %f", base, expoente, numero);
}