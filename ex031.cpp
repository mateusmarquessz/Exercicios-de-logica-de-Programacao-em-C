/*
Faça um Programa que leia um número e exiba o dia correspondente da semana. 
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float dia;
	printf("Diga o numero da semana, 1 para domingo, 2- segunda, etc.");
	scanf("%f", &dia);
	if(dia == 1){
		printf("Domingo");
	}else if(dia == 2){
			printf("Segunda");
	}else if(dia == 3){
			printf("Terca");
	}else if(dia == 4){
			printf("Quarta");
	}else if(dia == 5){
			printf("Quinta");
	}else if(dia == 6){
			printf("Sexta");
	}else if(dia == 7){
			printf("Sabado");
	}else{
		printf("valor invalido");
	}
}





