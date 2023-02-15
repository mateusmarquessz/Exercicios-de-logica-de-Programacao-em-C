/*
Desenvolva um programa que faça a tabuada de um número qualquer inteiro que será digitado pelo usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, o valor inicial e final devem ser informados também pelo usuário, conforme exemplo abaixo:

Montar a tabuada de: 5
Começar por: 4
Terminar em: 7

Vou montar a tabuada de 5 começando em 4 e terminando em 7:
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int Montar, Comeco, Termino, i;
    printf("Montar a tabuada de:");
    scanf("%i", &Montar);
    printf("Começar por:");
    scanf("%i", &Comeco);
    printf("Terminar em:");
    scanf("%i", &Termino);
       printf("Vou montar a tabuada de %i começando em %i e terminando em %i:\n", Montar, Comeco, Termino);
    for (i = Comeco; i <= Termino; i++){
        printf("\n%d X %d = %d", Montar, i, Montar * i);
    }
    
}