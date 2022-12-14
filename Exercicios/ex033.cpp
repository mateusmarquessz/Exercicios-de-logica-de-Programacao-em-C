/*
Fa�a um Programa que pe�a os 3 lados de um tri�ngulo.
O programa dever� informar se os valores podem ser um tri�ngulo.
Indique, caso os lados formem um tri�ngulo, se o mesmo �:
    equil�tero, is�sceles ou escaleno.
Dicas:
    Tr�s lados formam um tri�ngulo quando a soma de
    quaisquer dois lados for maior que o terceiro;
    Tri�ngulo Equil�tero: tr�s lados iguais;
    Tri�ngulo Is�sceles: quaisquer dois lados iguais;
    Tri�ngulo Escaleno: tr�s lados diferentes;
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    float lado1, lado2, lado3;
    printf("Digite o primeiro lado do tri�ngulo: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do tri�ngulo: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado do tri�ngulo: ");
    scanf("%f", &lado3);

    if (
        (lado1 + lado2 > lado3) 
        && (lado1 + lado3 > lado2) 
        && (lado2 + lado3 > lado1)
    )
    {
        if ((lado1 == lado2) && (lado2 == lado3))
            printf("� um tri�ngulo equil�tero!");
        else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
            printf("� um tri�ngulo is�sceles!");
        else
            printf("� um tri�ngulo escaleno!");
    }
    else
        printf("N�o � um tri�ngulo!");
    return 0;
}
