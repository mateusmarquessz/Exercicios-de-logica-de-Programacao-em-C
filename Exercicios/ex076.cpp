/*
O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa que leia as um conjunto indeterminado de temperaturas, e informe ao final a menor e a maior temperaturas informadas, bem como a média das temperaturas.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp = 1, soma, maior = -INFINITY, menor = INFINITY;
    int cont = 0;

    while(temp!=-1){
        printf("Digite a Temperatura, ou 0 para acabar com o programa");
        scanf("%f", &temp);

    cont++;
    soma += temp;

    if (temp < menor)
            menor = temp;
        if (temp > maior)
            maior = temp;
    }
    printf("A menor temperatura foi %f", menor);
    printf("\nA maior temperatura foi %f", maior);
    printf("\nA média das temperaturas foi %.3f", soma / cont);
}