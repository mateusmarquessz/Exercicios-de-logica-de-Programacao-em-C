/*
Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são: "Telefonou para a vítima?" "Esteve no local do crime?" "Mora perto da vítima?" "Devia para a vítima?" "Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.

Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    char telefone, local, mora, devia, trabalho;
    int positivo = 0;
    printf("Telefonou para a vitima? Responda com s ou n \n");
    scanf("%c", &telefone);
        if(telefone == 's' || telefone == 'n'){
            positivo ++;
        }

    printf("Esteve no local do crime? Responda com s ou n\n");
    scanf("%c", &local);
        if(local == 's' || local== 'n'){
            positivo ++;
        }

    printf("Mora perto da vitima? Responda com s ou n\n");
    scanf("%c", &mora);
        if(mora == 's' || mora == 'n'){
            positivo ++;
        }

    printf("Devia para a vitima? Responda com s ou n\n");
    scanf("%c", &devia);
        if(devia == 's' || devia == 'n'){
            positivo ++;
        }

    printf("Já trabalhou com a vitima? Responda com s ou n\n");
    scanf("%c", &trabalho);
        if(trabalho == 's' || trabalho == 'n'){
            positivo ++;
        }
    if(positivo > 2){
        printf("Suspeita");
    } else if(positivo > 3 || positivo < 5) {
        printf("Cúmplice");
    } else{
        printf("Assassino");
    }

}