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
    char nome[50], sexo, estadoCivil;
    int idade;
    float salario;

        printf("Diga seu nome:");
        scanf("%s", &nome);
    while(strlen(nome) < 4){
       printf("Nome invalido! \n Diga seu nome:");
            scanf("%s", &nome); 
    }

    printf("Diga sua idade:");
    scanf("%i", &idade);
    while(idade < 0 || idade > 150 ){
        printf("Idade invalida!\n Diga sua idade:");
            scanf("%i", &idade);
    }
    printf("Diga seu salario:");
    scanf("%f", &salario);
    while(salario < 0){
        printf("Salario invalido!\n Diga seu salario:");
            scanf("%f", &salario);
    }

    printf("Diga seu sexo, f-feminino, M-Masculino");
    scanf("%s",&sexo);
    while(sexo !='f' && sexo !='m'){
        printf("Sexo invalido!\n Diga seu sexo, f-feminino, M-Masculino");
            scanf("%s",&sexo);
    }

    printf("Diga seu Estado Civil, s-solteiro, c-casado, v-viuvo, d-divorciado");
    getchar();
    scanf("%s", &estadoCivil);
    while((estadoCivil != 's') && (estadoCivil != 'c') && (estadoCivil != 'v') && (estadoCivil != 'd')){
    printf("Estado Civil invalido! \nDiga seu Estado Civil, s-solteiro, c-casado, v-viuvo, d-divorciado");
    scanf("%s", &estadoCivil);
    }
    
}