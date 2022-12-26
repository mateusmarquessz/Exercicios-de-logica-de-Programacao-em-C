/*
Faça um programa que leia e valide as seguintes informações: 
Nome: maior que 3 caracteres; 
Idade: entre 0 e 150; 
Salário: maior que zero; 
Sexo: 'f' ou 'm'; 
Estado Civil: 's', 'c', 'v', 'd';
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    char nome[50], sexo, civil;
    float salario, idade;
    printf("Diga seu nome:");
        scanf("%s", &nome);
    printf("Diga sua idade");
        scanf("%f", &idade);
            getchar();
    printf("Diga seu salario:");
        scanf("%f", &salario);
            getchar();
    printf("Diga seu sexo: F-feminino, M-Masculino");
        scanf("%s", &sexo);
            getchar();
    printf("Diga seu Estado civil: 's', 'c', 'v', 'd'");
        scanf("%s", &civil);
            getchar();

    while(strlen(nome) <  4);{
        printf("Nome invalido\n");
            printf("Diga seu nome:");
        scanf("%s", &nome);
    }

    while(idade >  0 || idade <  150);{
        printf("Idade invalida \n");
          printf("Diga sua idade");
        scanf("%f", &idade);
    }

    while(salario > 0){
        printf("salario invalido");
        printf("Diga seu salario:");
        scanf("%f", &salario);
    }

    while(sexo == 'f' || sexo == 'F' || sexo == 'm' || sexo == 'M'){
        printf("sexo invalido");
        printf("Diga seu sexo: F-feminino, M-Masculino");
        scanf("%s", &sexo);
    }

    while(civil == 's' || civil == 'c' || civil == 'v' || civil =='d'){
        printf("Estado Civil invalido");
        printf("Diga seu Estado civil: 's', 'c', 'v', 'd'");
        scanf("%s", &civil);
    }

    printf("Nome:%s\n", nome);
    printf("Sua idade: %f\n", idade);
    printf("Seu sexo: %s\n", sexo);
    printf("Seu Estado Civil: %s", civil);
    
}