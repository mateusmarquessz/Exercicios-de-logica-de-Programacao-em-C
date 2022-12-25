/*
Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    char nome[50], senha[50];
    printf("Diga seu usuario: ");
    scanf("%s", nome);
    printf("Diga sua senha: ");
    scanf("%s", senha);
    getchar();
    while(!strcmp(nome, senha)){
        printf("Nome do usario nao pode ser igual a senha! \n");
        printf("Diga seu usuario: ");
            scanf("%s", nome);
        printf("Diga sua senha: ");
            scanf("%s", senha);
    }
}