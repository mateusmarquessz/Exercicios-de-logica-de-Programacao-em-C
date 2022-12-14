/*
Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    int dia, mes, ano;
    printf("Digite uma data no formato dd/mm/aaaa");
    scanf("%i/%i/%i", &dia,&mes,&ano);
     if(dia <= 31){
        printf("Dia valido \n");
    } else{
        printf("dia invalido\n");
    }

     if(mes <= 12){
        printf("mes valido\n");
    } else{
        printf("mes invalido\n");
    }

     if(ano > 0){
        printf("ano valido\n");
    } else{
        printf("ano invalido\n");
    }
    printf("%i/%i/%i",dia, mes, ano);
    return 0;
    }