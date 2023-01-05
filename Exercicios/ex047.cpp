/*
Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    char nome[100], senha[100];
    printf("Digite seu login de usuario:");
    scanf("%s", nome);
    printf("Digite sua senha de usuario:");
    scanf("%s", senha);
    
    while(strcmp(nome, senha) == 0 ){

    printf("Nome de usuario nao pode ser igual a senha!\n");
    printf("Digite seu login de usuario:");
    scanf("%s", nome);
    printf("Digite sua senha de usuario:");
    scanf("%s", senha);
    }
}