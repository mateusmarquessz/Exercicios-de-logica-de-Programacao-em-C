/*
O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da tabelinha, que já é um sucesso na sua loja de 1,99.

Você foi contratado para desenvolver o programa que monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário, conforme o exemplo abaixo:
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    printf("Digite a quantidade de paes que voce deseja");
    scanf("%i", &n);

    for (i =1; i < n; i++){
        printf("\n%2d - R$ %5.2f", i, 1.99 * i);
    }
    
}