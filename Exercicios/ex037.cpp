/*
Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.

Observando os termos no plural a colocação do "e", da vírgula entre outros.

Exemplo: 326 = 3 centenas, 2 dezenas e 6 unidades 12 = 1 dezena e 2 unidades

Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    int num, resto, dezena, centena;
    printf("Diga um numero inteiro maior que 0 e menor que 1000");
    scanf("%i", &num);
    resto = num % 10;
    num = (num - resto)/10;
    dezena = num % 10;
    num = (num - dezena)/10;
    centena = num;
    if(num > 0 && num < 1000){
        printf("%i centenas, %i dezenas e %i unidades", centena, dezena, resto);
    }
}