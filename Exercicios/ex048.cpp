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
    char nome[100], sexo, civil;
    int idade;
    float salario;
    printf("Diga seu nome:");
        scanf("%s", &nome);
            while(strlen(nome) >  3);{
                printf("Nome invalido\n");
                printf("Diga seu nome:");
                scanf("%s", &nome);
    }

    printf("Diga sua idade");
        scanf("%i", &idade);
            getchar();
                while((idade <  0) || (idade >  150));{
                    printf("Idade invalida \n");
                    printf("Diga sua idade");
                scanf("%i", &idade);
    }

    printf("Diga seu salario:");
        scanf("%f", &salario);
            getchar();
                while(salario <= 0){
                    printf("salario invalido\n");
                    printf("Diga seu salario:");
                scanf("%f", &salario);
    }

   printf("Diga seu sexo: F-feminino, M-Masculino");
        scanf("%s", &sexo);
            getchar();
                while((sexo != 'f') && (sexo != 'F') && (sexo != 'm') && (sexo != 'M')){
                    printf("sexo invalido\n");
                    printf("Diga seu sexo: F-feminino, M-Masculino");
                scanf("%s", &sexo);
    }

    printf("Diga seu Estado civil: 's', 'c', 'v', 'd'");
        scanf("%s", &civil);
            getchar();
                while((civil != 's') && (civil != 'c') && (civil != 'v') && (civil !='d')){
                    printf("Estado Civil invalido\n");
                    printf("Diga seu Estado civil: 's', 'c', 'v', 'd'");
                scanf("%s", &civil);
    }   
}